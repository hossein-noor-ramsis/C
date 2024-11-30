#include <stdio.h>

void RotateTable(int Table[4][3], int rotateUp, int rotateLeft);

int main()
{
    int Table[4][3] = {
        {2, 14, 19},
        {5, 3, 8},
        {9, 21, 6},
        {11, 61, 13}};

    RotateTable(Table, 1, 2);
}

void RotateTable(int Table[4][3], int rotateUp, int rotateLeft)
{
    int newTable[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            newTable[i][j] = Table[(i + rotateUp) % 4][(j + rotateLeft) % 3];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", newTable[i][j]);
        }
        
        printf("\n");
    }
}