#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char printBoard(int board[4][4]);
void addRandom(int board[4][4]);
void initializeBoard(int board[4][4]);

int main()
{
    int flag = 1;
    char move = ' ';

    int board[4][4] = {{0}};
    initializeBoard(board);

    while (flag)
    {
        move = printBoard(board);

        switch (move)
        {
        case 'L':
        case 'l':
            printf("L");
            break;
        case 'R':
        case 'r':
            printf("R");
            break;
        case 'U':
        case 'u':
            printf("U");
            break;
        case 'D':
        case 'd':
            printf("D");
            break;
        case 'Q':
        case 'q':
            flag = 0;
            break;
        case 'B':
        case 'b':
            printf("B");
            break;
        default:
            break;
        }
    }

    return 0;
}

char printBoard(int board[4][4])
{
    // calculateScore()
    char move = ' ';

    printf("****************************************\n");
    printf("your score: %d\n", 0);
    printf("--------------------\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (board[i][j])
            {

                printf("|   %d   ", board[i][j]);
            }
            else
            {
                printf("|\t");
            }
        }
        printf("|\n");
    }

    printf("--------------------\n");
    printf("Move (L/R/U/D) or Quit, Back, New Start(Q, B, N)\n");

    scanf("%c", &move);
    return move;
}

void initializeBoard(int board[4][4])
{
    addRandom(board);
    addRandom(board);
}

void addRandom(int board[4][4])
{
    int flag = 1;
    srand((unsigned int)time(NULL));

    do
    {
        int random_number = rand() % 2 == 0 ? 2 : 4;
        int random_index_i = rand() % 4;
        int random_index_j = rand() % 25;

        if (gameOver)
        {
            gameOver();
        }

        if (board[random_index_i][random_index_j] == 0)
        {
            flag = 0;

            board[random_index_i][random_index_j] = random_number;
        }

    } while (flag);
}

gameOver()
{
    printf("****************************************\n");
    printf("your score: %d\n", 0);
    printf("--------------------\n");
    printf("\n\n");
    printf("\t\t Game Over! \t\t");
    printf("\n\n");
    printf("--------------------\n");
}