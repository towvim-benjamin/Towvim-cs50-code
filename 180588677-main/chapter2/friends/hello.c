// Greets a user by their name

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Collect a string from the user, then print their name
    // string name = get_string("Your name: ");
    printf("Hello, %s!\n", argv[1]);
    if (argc != 2)
    {
        printf("Usage: ./hello <name>\n");
        return 1;
    }
}
