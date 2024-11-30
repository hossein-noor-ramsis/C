#include <stdio.h>

int CalculatePointOfCell(int field[8][8], int i, int j);

int main()
{
    int x, y;
    int field[8][8] = {
        {1, 0, 0, 0, 1, 0, 0, 1},
        {0, 1, 1, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 0, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 1},
        {0, 1, 0, 0, 1, 0, 1, 0},
        {0, 0, 1, 0, 0, 0, 0, 0},
        {1, 0, 0, 0, 1, 0, 1, 0},
    };

    printf("Enter coordinates (x, y): ");
    scanf("%d %d", &x, &y);

    CalculatePointOfCell(field, x, y);
}

int CalculatePointOfCell(int field[8][8], int i, int j)
{
    int result = 0;

    for (int y = i - 1; y <= i + 1; y++)
    {
        for (int x = j - 1; x <= j + 1; x++)
        {
            if (field[x][y] == 1)
            {
                result++;
            }
        }
    }

    printf("The point of cell (%d, %d) is: %d\n", i, j, result);

    return 0;
}
