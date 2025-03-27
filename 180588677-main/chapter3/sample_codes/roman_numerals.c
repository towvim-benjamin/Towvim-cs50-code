#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int value(string roman);
bool valid(string numeral);
int main(int argc, string argv[])
{
    /*if(value(argv[1])==value(argv[2])){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }*/
    if (valid(argv[1]))
    {
        printf("valid\n");
    }
    else
    {
        printf("invalid\n");
    }
}

int value(string roman)
{
    int sum = 0;
    for (int i = 0; i < strlen(roman); i++)
    {
        if (roman[i] == 'I')
        {
            sum += 1;
        }
        if (roman[i] == 'V')
        {
            sum += 5;
        }
        if (roman[i] == 'X')
        {
            sum += 10;
        }
        if (roman[i] == 'L')
        {
            sum += 50;
        }
        if (roman[i] == 'C')
        {
            sum += 100;
        }
    }
    // printf("%i\n", sum);
    return sum;
}
bool valid(string numeral)
{
    for (int i = 0; i < strlen(numeral); i++)
    {
        /*string merge[3];
        merge[0] = &numeral[i];
        merge[1] = &numeral[i+1];
        merge[2] = "\0";
        if(value(merge[0]) < value(merge[1])){
            printf("fail2\n%c\n", numeral[i]);
            return false;
        }*/
        int s = 0;
        if (numeral[i] == 'I')
        {
            s = 1;
        }
        if (numeral[i] == 'V')
        {
            s = 5;
        }
        if (numeral[i] == 'X')
        {
            s = 10;
        }
        if (numeral[i] == 'L')
        {
            s = 50;
        }
        if (numeral[i] == 'C')
        {
            s = 100;
        }
        int t = 0;
        if (numeral[i + 1] == 'I')
        {
            t = 1;
        }
        if (numeral[i + 1] == 'V')
        {
            t = 5;
        }
        if (numeral[i + 1] == 'X')
        {
            t = 10;
        }
        if (numeral[i + 1] == 'L')
        {
            t = 50;
        }
        if (numeral[i + 1] == 'C')
        {
            t = 100;
        }
        if (s < t)
        {
            // printf("s= %i\n, t=%i\n", s, t);
            return false;
        }
        if (islower(numeral[i]))
        {
            printf("fail3\n%c\n", numeral[i]);
            return false;
        }
        if (isspace(numeral[i]))
        {
            // printf("fail1\n%c", numeral[i]);
            return false;
        }
        //should use get_string instead
        printf("%c\n", numeral[i]);
        // printf("%i\n%i\n", value(merge[0]), value(merge[1]));
    }
    return true;
}
