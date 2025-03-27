/*Complete the function below
 * This file will not have a main function. DO NOT ADD ONE.
 * Type the next 2 commands in your terminal:
 * make islandmain
 * ./islanmain
 * You can use different test islands to see if your function works.
 * To use different test islands, give input -1, -2, -3, -4
 */

#include <cs50.h>
#include <stdio.h>

#include "island.h"

int mapping(int island[5][5])
{
    // YOUR CODE GOES HERE...and HERE ONLY!!!
    int counter = 0;
    int perimeter = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            counter = 0;
            if (island[i][j] == 1)
            {
                if (i != 4)
                {
                    if (island[i + 1][j] == 1)
                    {
                        counter += 1;
                    }
                }
                if (i != 0)
                {
                    if (island[i - 1][j] == 1)
                    {
                        counter += 1;
                    }
                }
                if (j != 4)
                {
                    if (island[i][j + 1] == 1)
                    {
                        counter += 1;
                    }
                }
                if (j != 0)
                {
                    if (island[i][j - 1] == 1)
                    {
                        counter += 1;
                    }
                }
                if (counter < 4)
                {
                    perimeter += (4 - counter);

                    // printf("perimeter: %i, location: (%i,%i)\n", 4-counter, i, j);
                }
            }
        }
    }
    return perimeter;
}
