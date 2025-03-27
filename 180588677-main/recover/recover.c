#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc!=2)
    {
        printf("usage: ./recover card.raw");
        return 1
    }
    FILE *file = fopen(argv[1], "r");
    int buffer[512];
    bool end == false;
    while(!end)
    {
        fread(buffer[], ,512, argv[1])
        
    }
}
