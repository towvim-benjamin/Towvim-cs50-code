// Implements Game of Fifteen (generalized to d x d)

#define _XOPEN_SOURCE 500

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Constants
#define DIM_MIN 3
#define DIM_MAX 9
#define COLOR "\033[32m"

// Board
int board[DIM_MAX][DIM_MAX];

// Dimensions
int d;

// Saved locations of the blank tile
int blank_row;
int blank_col;

// Prototypes
void clear(void);
void greet(void);
void init(void);
void draw(void);
bool move(int tile);
bool won(void);
void swap(int *a, int *b);
void print_grid_row(int d);
void print_tile(int tile);

int main(int argc, string argv[])
{
    // Ensure proper usage
    if (argc != 2)
    {
        printf("Usage: fifteen d\n");
        return 1;
    }

    // Ensure valid dimensions
    d = atoi(argv[1]);
    if (d < DIM_MIN || d > DIM_MAX)
    {
        printf("Board must be between %i x %i and %i x %i, inclusive.\n", DIM_MIN, DIM_MIN, DIM_MAX,
               DIM_MAX);
        return 2;
    }

    // Open log
    FILE *file = fopen("log.txt", "w");
    if (file == NULL)
    {
        return 3;
    }

    // Greet user with instructions
    greet();

    // Initialize the board
    init();

    // Accept moves until game is won
    while (true)
    {
        // Clear the screen
        clear();

        // Draw the current state of the board
        draw();

        // Log the current state of the board (for testing)
        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < d; j++)
            {
                fprintf(file, "%i", board[i][j]);
                if (j < d - 1)
                {
                    fprintf(file, "|");
                }
            }
            fprintf(file, "\n");
        }
        fflush(file);

        // Check for win
        if (won())
        {
            printf("ftw!\n");
            break;
        }

        // Prompt for move
        int tile = get_int("Tile to move: ");

        // Quit if user inputs 0 (for testing)
        if (tile == 0)
        {
            break;
        }

        // Log move (for testing)
        fprintf(file, "%i\n", tile);
        fflush(file);

        // Move if possible, else report illegality
        if (!move(tile))
        {
            printf("\nIllegal move.\n");
            usleep(500000);
        }

        // Sleep thread for animation's sake
        usleep(50000);
    }

    // Close log
    fclose(file);

    // Success
    return 0;
}

// Clears screen using ANSI escape sequences
void clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

// Greets player
void greet(void)
{
    clear();
    printf("WELCOME TO GAME OF FIFTEEN\n");
    usleep(2000000);
}

// Initializes the game's board with tiles numbered 1 through d*d - 1
// (i.e., fills 2D array with values but does not actually print them)
void init(void)
{
    int counter = (d * d) - 1;

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            board[i][j] = counter;
            counter -= 1;
        }
    }
    if (d % 2 == 0)
    {
        board[d - 1][d - 2] = 2;
        board[d - 1][d - 3] = 1;
    }
    // TODO
}

// Prints the board in its current state
void draw(void)
{
    // printf("hi");
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {

            if (board[i][j] == 0)
            {
                printf("   ");
            }
            else if (board[i][j] > 9)
            {
                printf("%i ", board[i][j]);
            }
            else
            {
                printf(" %i ", board[i][j]);
            }
        }
        printf("\n");
    }
    // TODO
}

// If tile borders empty space, moves tile and returns true, else returns false
bool move(int tile)
{
    // TODO
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            // printf("%i\n%i\n%i\n%i\n", board[i][j-1], board[i][j+1], board[i+1][j],
            // board[i-1][j]);
            if (board[i][j] == tile)
            {
                if (board[i][j - 1] == 0 && j != 0)
                {
                    board[i][j] = 0;
                    board[i][j - 1] = tile;
                    return true;
                }
                else if (board[i][j + 1] == 0 && j != d - 1)
                {
                    // printf("%i", j);
                    board[i][j] = 0;
                    board[i][j + 1] = tile;
                    return true;
                }
                else if (board[i + 1][j] == 0 && i != d - 1)
                {
                    // printf("%i", i);
                    board[i][j] = 0;
                    board[i + 1][j] = tile;
                    return true;
                }
                else if (board[i - 1][j] == 0 && i != 0)
                {
                    board[i][j] = 0;
                    board[i - 1][j] = tile;
                    return true;
                }
            }
        }
    }
    return false;
}

// Returns true if game is won (i.e., board is in winning configuration), else false
bool won(void)
{
    bool win = false;
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if ((board[i][j] < board[i + 1][j]) && (board[i][j]) < board[i][j + 1])
            {
                win = true;
            }
            else
            {
                win = false;
            }
        }
    }
    // TODO
    if (win)
    {
        return true;
    }
    else
    {
        return false;
    }
}
