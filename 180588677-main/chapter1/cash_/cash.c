/*
 * cash.c by YOUR NAME HERE
 * 9/23/2021
 * Calculate least number of coins to make change
 */

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float change = get_float("Change owed: ");
    if (change < 0)
    {
        change = get_float("Change owed: ");
    }
    int cents = round(change * 100);
    while (cents > 0)
    {
        int owed = 0;
        int quarters = cents / 25;
        cents -= (quarters * 25);
        int dimes = cents / 10;
        cents -= (dimes * 10);
        int nickels = cents / 5;
        cents -= (nickels * 5);
        int pennies = cents / 1;
        cents -= pennies;
        owed = quarters + dimes + nickels + pennies;
        printf("%i\n", owed);
        cents = 0;
    }

    // TODO - Convert (and round) to cents/number of pennies

    // TODO - Quarters
    // TODO - Dimes
    // TODO - Nickels
    // TODO - Pennies

    // TODO - Report
}
