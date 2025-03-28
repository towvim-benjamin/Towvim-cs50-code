#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 == score2)
    {
        printf("It's a tie\n");
    }
    else if (score1 > score2)
    {
        printf("player 1 wins\n");
    }
    else
    {
        printf("player 2 wins\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int sum = 0;
    int len = strlen(word);
    // int point;
    // word = upper(word);
    for (int i = 0; i < len; i++)
    {
        // point = word[i];
        if (isalpha(word[i]))
        {
            sum += POINTS[toupper(word[i]) - 65];
        }
        // printf("%i\n", POINTS[toupper(word[i]) - 65]);
    }
    // printf("%i", word[0]);

    return sum;
}
