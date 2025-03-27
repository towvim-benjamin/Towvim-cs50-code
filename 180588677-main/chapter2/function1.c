#include <stdio.h>
int factorial (int n);
int main(void){
    int num = factorial(9);
    printf("%i\n", num);
}
int factorial (int n)
{
    int product = 1;
    for (int i =1; i <= n; i++){
        product = product*i;
    }
    return product;
}
