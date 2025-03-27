#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("usage: ./caesar <key>");
        return 1;
    }
    else
    {
        for (int j = 0; j < strlen(argv[1]); j++)
        {
            if (argc != 2 || atoi(argv[1]) < 1 || isdigit(argv[1][j]) == false)
            {
                printf("usage: ./caesar <key>");
                return 1;
            }
        }
    }
    int key = atoi(argv[1]);
    char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string Ptext = get_string("plaintext: \n");
    int length = strlen(Ptext);
    for (int i = 0; i < length; i++)
    {
        // printf("%c\n", Ptext[i]);
        if (isalpha(Ptext[i]))
        {
            if (isupper(Ptext[i]))
            {
                Ptext[i] = toupper(letters[(Ptext[i] + key - 65) % 26]);
            }
            else
            {
                Ptext[i] = letters[(Ptext[i] + key - 97) % 26];
            }
        }
    }
    printf("ciphertext: %s\n", Ptext);
}
