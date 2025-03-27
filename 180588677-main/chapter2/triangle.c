/*
 * triangle.c by Mr. Shoutis
 * Collect 3 integers from a user and test to see if they make a triangle
 *
 * Checking: check50 shoutiss/checks/master/triangle
 * Submitting: submit50 shoutiss/checks/master/triangle
 *
 */

#include <cs50.h>
#include <stdio.h>

// Add something here - what's missing?
bool triangle_check(int a, int b, int c);

int main(void)
{
    // Collect sides from user
    int side1 = get_int("Enter the first side: ");
    int side2 = get_int("Enter the second side: ");
    int side3 = get_int("Enter the third side: ");

    // COMPLETE THIS MAIN FUNCTION - Print YES\n if the sides could make a triangle
    // print NO\n if the sides cannot make a traingle.
    // you MUST use the function triangle_check
    if (triangle_check(side1, side2, side3) == true)
    {
        printf("YES\n");
    }
    if (triangle_check(side1, side2, side3) == false)
    {
        printf("NO\n");
    }
    return 0;
}

bool triangle_check(int a, int b, int c)
{
    // Ensure all side lengths are positive
    if (a < 0 || b < 0 || c < 0)
    {
        return false;
    }

    // Sum of two sides must be strictly less than the third side
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        return false;
    }

    // Reaching here means the sides can make a triangle
    return true;
}
