#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char printBoard(int board[4][4]);
void addRandom(int board[4][4]);
void initializeBoard(int board[4][4]);
int calculateScore(int board[4][4]);
int checkIsGameOver(int board[4][4]);
void gameOver(int board[4][4]);
void winGame(int board[4][4]);
void startNew(int[4][4]);
int moveLeft(int board[4][4]);
void copyBoard(int board[4][4], int tempBoard[4][4]);

int main()
{
    int flag = 1;
    char move;

    int board[4][4] = {{0}};
    int tempBoard[4][4] = {{0}};

    initializeBoard(board);

    while (flag)
    {
        move = printBoard(board);

        switch (move)
        {
        case 'L':
        case 'l':
            copyBoard(board, tempBoard);
            moveLeft(board);

            break;
        case 'R':
        case 'r':
            break;
        case 'U':
        case 'u':
            break;
        case 'D':
        case 'd':
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

        if (checkIsGameOver(board))
        {
            flag = 0;
            gameOver(board);
        }
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
    while(getchar() != '\n');
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

    while (flag)
    {
        int random_number = rand() % 2 == 0 ? 2 : 4;
        int random_index_i = rand() % 4;
        int random_index_j = rand() % 25;

        if (board[random_index_i][random_index_j] == 0)
        {
            flag = 0;

            board[random_index_i][random_index_j] = random_number;
        }
    }
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

int checkIsGameOver(int board[4][4])
{
    int isGameOver = 1;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (board[i][j] == 0)
            {
                isGameOver = 0;
                break;
            }
        }
    }

    if (isGameOver)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (board[i][j] == board[i - 1 >= 0 ? i - 1 : i + 1][j])
                {
                    isGameOver = 0;
                    break;
                }

                if (board[i][j] == board[i + 1 <= 3 ? i + 1 : i - 1][j])
                {
                    isGameOver = 0;
                    break;
                }

                if (board[i][j] == board[i][j - 1 >= 0 ? i - 1 : i + 1])
                {
                    isGameOver = 0;
                    break;
                }

                if (board[i][j] == board[i][j + 1 <= 3 ? i + 1 : i - 1])
                {
                    isGameOver = 0;
                    break;
                }
            }
        }
    }

    if (isGameOver)
    {
        gameOver(board);
        return 1;
    }

    return 0;
}

void gameOver(int board[4][4])
{
    printf("****************************************\n");
    printf("your score: %d\n", calculateScore(board));
    printf("--------------------\n");
    printf("\n\n");
    printf("\t\t GAME OVER! \t\t");
    printf("\n\n");
    printf("--------------------\n");
}

void winGame(int board[4][4])
{
    printf("****************************************\n");
    printf("your score: %d\n", calculateScore(board));
    printf("--------------------\n");
    printf("\n\n");
    printf("\t\t YOU WIN! \t\t");
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

void copyBoard(int boardOne[4][4], int boardTwo[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            boardTwo[i][j] = boardOne[i][j];
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

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 0) {
                continue;
            }

            if (board[i][j] == board[i][j + 1])
            {
                board[i][j] = board[i][j] * 2;
                board[i][j + 1] = 0;

                for (int k = j; k > 0; k--)
                {
                    if (board[i][k - 1] == 0)
                    {
                        board[i][k - 1] = board[i][k];
                        board[i][k] = 0;
                    }
                }
            }
        }
    }

    if (flag)
    {
        addRandom(board);
    }

    return flag;
}