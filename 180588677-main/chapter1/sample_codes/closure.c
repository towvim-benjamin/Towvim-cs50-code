#include <stdio.h>
#include <cs50.h>

int main(void){
    int num = get_int("enter any year:\n");
    if(num%100==0){
        if(num%400==0){
        printf("%i is a leap year\n", num);
    }
    else{
        printf("%i is not a leap year\n", num);
    }
    }
    else if(num%4==0){
        printf("%i is a leap year\n", num);
    }
    else{
        printf("%i is not a leap year\n", num);
    }
}

