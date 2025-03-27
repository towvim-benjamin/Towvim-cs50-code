#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[]){
    if (argc != 4){
        printf("usage: ./middle <num1> <num2> <num3>");
        return 1;
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int num3 = atoi(argv[3]);
    if((num1>num2 && num2>num3) || (num3>num2 && num2>num1)){
        printf("second largest: %i\n", num2);
    }
    if((num2>num3 &&num3>num1) || (num1>num3 &&num3>num2)){
        printf("second largest: %i\n", num3);
    }
    if((num3>num1&&num1>num2) || (num2>num1&&num1>num3)){
        printf("second largest: %i\n", num1);
    }
    //printf("num1: %i\nnum2: %i\nnum3: %i", num1, num2, num3);
}
