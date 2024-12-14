#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int calculateAndPrintDiagonalSums(int N, int matrix[N][N]);

int main()
{
  int array[3][3] = {
      {4, 3, 2},
      {3, 2, 3},
      {2, 3, 4}};

  printf("diagonal sum is: %d", calculateAndPrintDiagonalSums(3, array));
}

int calculateAndPrintDiagonalSums(int N, int matrix[N][N])
{
  int sum = 0;
  int x = 0;
  int y = N - 1;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if ((i == x && j == y) || i == j)
      {
        sum += matrix[i][j];
      }
    }

    y--;
    x++;
  }

  return sum;
}

bool IsDiagonalMatrix(int N, int matrix[N][N])
{
  bool isDiagonal = false;

  int size = 1;
  int *array = calloc(size, typedef(int));

  int sum = 0;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if ((i == x && j == y) || i == j)
      {
        array[i] = matrix[i][j];
        size++;

        realloc(array, size * typedef(int));
      }
    }
  }

  for (int i = 0; i < N; i++)
  {
    sum = +array[i];
  }

  return isDiagonal;
}
