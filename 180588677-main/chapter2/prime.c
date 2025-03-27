#include <stdio.h>
#include <cs50.h>

bool isprime(int a);
int main (void){
    int n;
    do{
        n = get_int("Input a number: \n");
    }
    while(n<0);
    if(isprime(n)==true){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
}
bool isprime(int a){
    for (int i=2; i<a; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
