#include <stdio.h>
#include <cs50.h>
float calculate(float a, float b, float c);
int main (void){
    float bill = get_float("bill before tax and tip: \n");
    float tax = get_float("sales tax percent: \n");
    float tip = get_float("tip percent: \n");
    printf("you owe: %.2f\n", calculate(bill, tax, tip));
}
float calculate(float a, float b, float c){
    b= b/100 + 1;
    c = c/100 +1;
    a *= b;
    a *= c;
    a/=2;
    return a;
}
