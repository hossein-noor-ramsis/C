#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char printBoard(int board[4][4]);
void addRandom(int board[4][4]);
void initializeBoard(int board[4][4]);
int calculateScore(int board[4][4]);
void gameOver();
void startNew(int[4][4]);
int moveLeft(int board[4][4]);
void copyBoard(int board[4][4], int tempBoard[4][4]);

int main()
{
    int flag = 1;
    char move = ' ';

    int board[4][4] = {{0}};
    int tempBoard[4][4];

    initializeBoard(board);

    while (flag)
    {
        move = printBoard(board);

        switch (move)
        {
        case 'L':
        case 'l':
            moveLeft(board);
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
            copyBoard(tempBoard, board);
            break;
        case 'N':
        case 'n':
            startNew(board);
            initializeBoard(board);
            break;
        default:
            break;
        }

        copyBoard(board, tempBoard);
    }

    return 0;
}

char printBoard(int board[4][4])
{
    int score = calculateScore(board);
    char move = ' ';

    printf("****************************************\n");
    printf("your score: %d\n", score);
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

        if (0)
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

int calculateScore(int board[4][4])
{
    int score = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            score += board[i][j];
        }
    }

    return score;
}

void gameOver()
{
    printf("****************************************\n");
    printf("your score: %d\n", 0);
    printf("--------------------\n");
    printf("\n\n");
    printf("\t\t Game Over! \t\t");
    printf("\n\n");
    printf("--------------------\n");
}

void startNew(int board[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            board[i][j] = 0;
        }
    }
}

void copyBoard(int boardOne[4][4], int tempTwo[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            tempOne[i][j] = boardTwo[i][j];
        }
    }
}

int moveLeft(int board[4][4])
{
    int flag = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 0)
            {
                board[i][j] = board[i][j + 1];
                board[i][j + 1] = 0;

                for (int k = j; k > 0; k--)
                {
                    if (board[i][k - 1] == 0)
                    {
                        board[i][k - 1] = board[i][k];
                        board[i][k] = 0;
                    }
                }

                flag = 1;
            }
        }
    }

    if (flag)
    {
        printf("test");
        addRandom(board);
    }

    return flag;
}