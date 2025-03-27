#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>


int main(int argc, string argv[]){
    if (argc != 3){
        printf("usage: ./sum <first integer> <second integer>\n");
        return 0;
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("sum: %i\n", num1 + num2);
}
