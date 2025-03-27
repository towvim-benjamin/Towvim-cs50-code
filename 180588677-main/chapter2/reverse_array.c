#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int elem = get_int("Input number of elements to store in the array: \n");
    int array [elem];
    for (int i=0; i<elem; i++){
        array[i] = get_int("element - %i : \n", i);
    }
    printf("Values of array: ");
    for (int j = 0; j<elem; j++){
        printf("%i", array[j]);
    }
    printf("\n");
    printf("Values of array in reverse: ");
    for (int k = elem-1; k>-1; k--){
        printf("%i", array[k]);
    }
    printf("\n");
    }
