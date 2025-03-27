#include <stdio.h>
#include <cs50.h>
float square (float a);
int main(void){
    float a = get_float("Input any number for square: \n");
    float b = square(a);
    printf("the square of %.0f is %.2f\n", a, b);
}
float square (float a){
    float b = a*a;
    return b;
}

