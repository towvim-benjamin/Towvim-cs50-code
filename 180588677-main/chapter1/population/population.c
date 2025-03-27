#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int years = 0;
    int population = get_int("input a starting population size:\n");
    while (population < 9)
    {
        population = get_int("input a population size:\n");
    }
    int end = get_int("input an end population:\n");
    while (end < population)
    {
        end = get_int("input an end population:\n");
    }
    while (population < end)
    {
        float growth = population / 3;
        float decrease = population / 4;
        population += growth;
        population -= decrease;
        years++;
    }
    printf("Years: %i\n", years);
    // TODO: Prompt for start size

    // TODO: Prompt for end size

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
}
