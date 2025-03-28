// Converts degrees C to degrees F by collecting info at command line

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./fahrenheit <degrees>\n");
        return 1;
    }
    // Get celsius from user
    // float celsius = get_float("C: ");
    float celsius = atof(argv[1]);
    // Convert to fahrenheit; no float errors b/c celsius is a float
    float fahrenheit = (celsius * 9) / 5 + 32;
    printf("F: %.1f\n", fahrenheit);
}
