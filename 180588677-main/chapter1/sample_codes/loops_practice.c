#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main (void){
    for (int i=0; i<402; i++){
        if(i % 2 == 0){
        printf("%i\n", i);
    }
    else{
        printf("moo\n");
    }
    }
}
