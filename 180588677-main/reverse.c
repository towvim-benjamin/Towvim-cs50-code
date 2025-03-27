#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool areReversed(string a, string b);
bool casetest(string a);
int main(int argc, string argv[])
{
    if(argc!=2||atoi(argv[1])>10)
    {
        printf("usage: <./reverse> <(number<11)>\n");
        return 1;
    }
    bool found = false;
    string words[atoi(argv[1])];
    for(int i=0; i<atoi(argv[1]); i++){
        words[i] = get_string("word%i = ", i+1);
    }
    for(int i=0; i<atoi(argv[1])-1; i++)
    {
        if((strlen(words[i])>100)||(casetest(words[i]))||(strlen(words[i+1])>100)||(casetest(words[i+1])))
        {
            printf("words need to be less than 100 characters and lowercase\n");
            //return 1;
        }
        else if(areReversed(words[i], words[i+1]))
        {
            printf("[%s,%s]\n", words[i], words[i+1]);
            found=true;
            //printf("Explanation: "%s" when read backwards is "%s"\n",words[i], words[i+1]);
        }
        else if((strlen(words[i])!=strlen(words[i+1]))&&found==false)
        {
            printf("Words are of different lengths\n");
        }
        else if((areReversed(words[i], words[i+1])==false)&&found==false)
        {
            printf("No Reverses!");
        }
    }
    //printf("%i\n", areReversed(words[0], words[1]));
}
bool areReversed(string a, string b)
{
    bool test=false;
    if(strlen(a)!=strlen(b))
    {
        return false;
    }
    else
    {
    for(int i=0; i<strlen(a); i++)
    {
        //printf("b: %c\n", b[i]);
        //printf("a: %c\n", a[strlen(a)-i-1]);
        if(b[i]==a[strlen(a)-i-1])
        {
            test=true;
        }
        else
        {
            return false;
        }
    }
}
    return test;
}
bool casetest(string a)
{
    bool test = false;
    for(int i=0;i<strlen(a);i++)
    {
        if(isupper(a[i]))
        {
            test = true;
        }
    }
    //printf("%i\n",test);
    return test;
}
