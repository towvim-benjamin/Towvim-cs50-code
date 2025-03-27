#include <stdio.h>
#include <cs50.h>
#define NUM_INTS 3

float average(int e, int f, int g);
int main(void){
    int a = get_int("Enter integer 1: \n");
    int b = get_int("Enter integer 2: \n");
    int c = get_int("Enter integer 3: \n");
    float pavg = average(a,b,c);
    printf("average: %.2f\n", pavg);
}
float average(int e, int f, int g){
    float avg = 0;
    float sum = e+f+g;
    avg = sum/3;
    return avg;
}
