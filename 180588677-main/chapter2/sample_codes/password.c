#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    string names[5] = {"Malik", "Imani", "Kate", "Hershal", "Jackson"};
    string passwords[5];
    for (int i = 0; i < 5; i++)
    {
        passwords[i] = get_string("Enter a password for %s: ", names[i]);
    }
    printf("Here is a list of passwords: ");
    printf("[");
    for (int i = 0; i < 5; i++)
    {
        printf("\"%s\"", passwords[i]);
        if (i < 4)
        {
            printf(", ");
        }
    }
    printf("]\n");
}
