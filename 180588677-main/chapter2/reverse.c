#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]){
    if(argc!=2){
        printf("usage: <./reverse> <word>");
        return 0;
    }
    for (int i = strlen(argv[1]); i>=0; i--){
        printf("%c",argv[1][i]);
    }
    printf("\n");
}
