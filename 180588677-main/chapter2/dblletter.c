/*
 * dblletter.c
 * YOUR TASK: Complete the code below so that double letters are removed
 * Example: An input of Halloween -> Halowen
 *
 * Check your work: check50 shoutiss/checks/master/dblletter
 * Submit your work: submit50 shoutiss/checks/master/dblletter
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get message from user:
    string message = get_string("Enter message: ");

    // Print first character
    printf("%c", message[0]);
    // Iterate through string
    for (int i = 0, n = strlen(message); i < n - 1; i++)
    {
        // YOUR CODE HERE
        if (message[i] != message[i + 1])
        {
            printf("%c", message[i + 1]);
        }
    }
    printf("\n");
}
