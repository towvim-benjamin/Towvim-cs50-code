#include <stdio.h>
#include <cs50.h>

typedef struct
{
    string name;
    int grade;
    bool cs50;
}
STUDENT;

int main(void)
{
    STUDENT csl_student[5];
    csl_student[0].name = "Ben";
    csl_student[0].grade = 100;
    csl_student[0].cs50 = true;
    csl_student[1].name = "Cody";
    csl_student[1].grade = 54;
    csl_student[1].cs50 = false;
    csl_student[2].name = "Bob";
    csl_student[2].grade = 98;
    csl_student[2].cs50 = true;
    csl_student[3].name = "Ned";
    csl_student[3].grade = 87;
    csl_student[3].cs50 = true;
    csl_student[4].name = "Jake";
    csl_student[4].grade = 45;
    csl_student[4].cs50 = true;
    for(int i=0; i<5; i++)
    {
    printf("name: %s\ngrade: %i\nclass: %d\n", csl_student[i].name, csl_student[i].grade, csl_student[i].cs50);
    }
}
