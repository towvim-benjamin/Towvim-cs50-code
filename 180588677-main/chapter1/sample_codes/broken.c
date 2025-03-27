/*
 * broken.c by Mr. Shoutis
 * 10/17/2019
 * Attempts to find the sum of digits between two user entered numbers
 */

/* There are several errors or missing parts of this program.
 * Complete the program so that the user is prompted for 2 integers
 * where num1 < num2 and then the program prints the sum of
 * num1 through num2, inclusive of both endpoints.
 *
 * Check for correctness - does it compile? Does it reject values?
 * check50 shoutiss/checks/master/broken
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1;
    int sum = 0;
    // First num must be <= second num
    do
    {
        num1 = get_int("Positive integer: ");
    }
    while (num1 > 1);

    int num2;
    do
    {
        num2 = get_int("Positive integer greater than the first: ");
    }
    while (num2 < num1);

    for (int i = num1; i <= num2; i++)
    {
        sum = sum + i;
    }

    printf("Sum: %i\n", sum);
}
