#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float celsius = get_float("degrees in celcius: ");
    float fahrenheit = ((celsius * 9.0) / 5.0) + 32.0;
    printf("fahrenheit: %.1f\n", fahrenheit);
}
