#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        printf("usage: <./vigenere> <key>");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (argc > 2 || isalpha(argv[1][i]) == false)
        {
            return 1;
        }
    }
    string Ptext = get_string("plaintext: ");
    int key[strlen(argv[1])];
    int count = -1;
    char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        key[i] = argv[1][i];
        if (isupper(argv[1][i]))
        {
            key[i] -= 66;
        }
        else
        {
            key[i] -= 98;
        }
        // printf("%c", key[i]);
    }
    // printf("\n");
    for (int i = 0; i < strlen(Ptext); i++)
    {
        // printf("count: %i %c\n", count, argv[1][i]);
        if (isalpha(Ptext[i]))
        {
            if (count < strlen(argv[1]) - 1)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            if (isupper(Ptext[i]))
            {
                Ptext[i] = toupper(letters[(Ptext[i] + key[count] - 64) % 26]);
            }
            else
            {
                Ptext[i] = letters[(Ptext[i] + key[count] - 96) % 26];
            }
            // printf("%c\n", Ptext[i]);
        }
    }
    printf("ciphertext: %s\n", Ptext);
}
