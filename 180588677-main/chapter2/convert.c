#include <stdio.h>
#include <cs50.h>
#include <math.h>
int printer(int n);
int check = 1;
int a;
int print = 1;
int main(void){
    do{
    a = get_int("input any decimal number: \n");
}
    while(a<1);
    int k = printer(a);
    printf("%i\n", k);
}
int printer(int n){
    while (check<n){
        check*=2;
    }
    check/=2;
    while(n>0){
    if (n>check){
        n-=check;
       // check *= 2;
        print = print*10 +1;
    }
    }
    return check;
}
