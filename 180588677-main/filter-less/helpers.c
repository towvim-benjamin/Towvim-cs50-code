#include "helpers.h"
#include <math.h>
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int avg =
                round((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3.0);
            image[i][j].rgbtBlue = avg;
            image[i][j].rgbtGreen = avg;
            image[i][j].rgbtRed = avg;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen +
                                 .189 * image[i][j].rgbtBlue);
            int sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen +
                                   .168 * image[i][j].rgbtBlue);
            int sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen +
                                  .131 * image[i][j].rgbtBlue);
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }
            image[i][j].rgbtBlue = sepiaBlue;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtRed = sepiaRed;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < (width / 2); j++)
        {
            int ogR = image[i][j].rgbtRed;
            int ogB = image[i][j].rgbtBlue;
            int ogG = image[i][j].rgbtGreen;
            int OpB = image[i][j].rgbtBlue = image[i][width - j - 1].rgbtBlue;
            int OpG = image[i][j].rgbtGreen = image[i][width - j - 1].rgbtGreen;
            int OpR = image[i][j].rgbtRed = image[i][width - j - 1].rgbtRed;
            image[i][j].rgbtRed = OpR;
            image[i][j].rgbtBlue = OpB;
            image[i][j].rgbtGreen = OpG;
            image[i][width - j - 1].rgbtBlue = ogB;
            image[i][width - j - 1].rgbtGreen = ogG;
            image[i][width - j - 1].rgbtRed = ogR;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            temp[i][j] = image[i][j];
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int totalR = 0;
            int totalG = 0;
            int totalB = 0;
            int count = 0;
            for (int oi = -1; oi < 2; oi++)
            {
                for (int oj = -1; oj < 2; oj++)
                {
                    int ni = oi + i;
                    int nj = oj + j;
                    if (ni < height && ni >= 0 && nj < width && nj >= 0)
                    {
                        totalR += temp[ni][nj].rgbtRed;
                        totalG += temp[ni][nj].rgbtGreen;
                        totalB += temp[ni][nj].rgbtBlue;
                        count++;
                    }
                }
            }
            image[i][j].rgbtBlue = round((float) totalB / count);
            image[i][j].rgbtRed = round((float) totalR / count);
            image[i][j].rgbtGreen = round((float) totalG / count);
        }
    }
    return;
}
