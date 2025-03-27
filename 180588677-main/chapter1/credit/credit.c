#include <cs50.h>
#include <math.h>
#include <stdio.h>
int main(void)
{
    long num;
    long second;
    long sum1 = 0;
    long sum2 = 0;
    long sum3 = 0;
    long first;
    long add;
    long store;
    long store2;
    do
    {
        num = get_long("Number: \n");
    }
    while (num == 0);
    store = num;
    store2 = num;
    int length = log10(store2) + 1;
    if (length % 2 == 0)
    {
        for (int i = 0; i < num / 2; i++)
        {
            num /= 10;
            second = num % 10;
            num /= 10;
            second *= 2;
            if (second < 10)
            {
                add = second;
            }
            else
            {
                add = second % 10 + second / 10;
            }
            sum1 += add;
            // printf("%lu\n", sum1);
        }
        for (int j = 0; j < store / 2; j++)
        {
            first = store % 10;
            store /= 100;
            sum2 += first;
            // printf("%lu\n", sum2);
        }
    }
    else
    {
        for (int i = 0; i < (num) / 20; i++)
        {
            num /= 10;
            second = num % 10;
            num /= 10;
            second *= 2;
            if (second < 10)
            {
                add = second;
            }
            else
            {
                add = second % 10 + second / 10;
            }
            sum1 += add;
            // printf("%lu\n", sum1);
        }
        for (int j = 0; j < (store) / .2; j++)
        {
            first = store % 10;
            store /= 100;
            sum2 += first;
            // printf("%lu\n", sum2);
        }
    }
    sum3 = sum1 + sum2;
    // printf("%lu\n", sum3);
    if (sum3 % 10 == 0)
    {
        int v1 = store2 / (1e12);
        int v2 = store2 / (1e15);
        int A = store2 / (1e14);
        int MC = store2 / (1e15);
        int A2 = store2 / (1e13);
        int MC2 = store2 / (1e14);
        // printf("%i\n", length);
        // printf("%f", store2/1e15);
        if ((length == 13 && v1 == 4) || (length == 16 && v2 == 4))
        {
            printf("VISA\n");
        }
        else if (length == 15 && A == 3 && (A2 % 10 == 4 || A2 % 10 == 7))
        {
            printf("AMEX\n");
        }
        else if (length == 16 && MC == 5 &&
                 (MC2 % 10 == 1 || MC2 % 10 == 2 || MC2 % 10 == 3 || MC2 % 10 == 4 ||
                  MC2 % 10 == 5))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
