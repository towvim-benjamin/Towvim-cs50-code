// Ben Towvim

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float weight = get_float("Weight of large envelope: \n");
    if (weight > 13)
    {
        printf("Over allowed weight");
    }
    int check = weight;
    float price = 0.0;
    if ((weight - 1) * .2 + 1 > (check - 1) * .2 + 1)
    {
        price = (check) * .2 + 1;
    }
    else
    {
        price = (weight - 1) * .2 + 1;
    }
    printf("\\$%.2f\n", price);
}
