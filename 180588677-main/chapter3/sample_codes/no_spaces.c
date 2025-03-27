#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    string msg = get_string("what is your message?\n");
    for(int i=0;i<strlen(msg); i++)
    {
        if(isspace(msg[i]))
        {
            printf("");
        }
        else
        {
            printf("%c", toupper(msg[i]));
        }
    }
    printf("\n");
}
