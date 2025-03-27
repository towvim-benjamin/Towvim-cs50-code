#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int num;
    do
    {
        num = get_int("enter a height:\n");
    }
    while (8 < num || num < 1);
    for (int i = num; i > 0; i--)
    {
        for (int j = 1; j < num + 1; j++)
        {
            if (j < i)
            {
                printf(" ");
                // printf("%i", i);
                // printf("%i", j);
            }
            else
            {
                printf("#");
            }
        }
        printf("  ");
        //  for(int k = num-i; k>0; k--){
        //  printf("#");
        //}

        /*
        printf("  ");
        for (int l = 1; l <= count; l++)
        {
            printf("#");
        }
        for (int m = 1; m < i; m++)
        {
            printf(" ");
        }*/
        for (int k = 1; k < num + 1; k++)
        {
            if (k < num + 2 - i)
            {
                printf("#");
                // printf("%i", i);
                // printf("%i", k);
            }
        }
        printf("\n");
    }
}
