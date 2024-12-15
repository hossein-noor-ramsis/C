#include <stdio.h>
#include <stdlib.h>

int *mergeAndSortArrays(int *array1, int N1, int *array2, int N2);

int main()
{
  int size = 5;

  int new_num = 5;

  int x = 5;
  int *y = &n;
  int **z = &x;

  for (int i = 0; i < size; i++)
  {
    array[i] = i * 2;
  }

  insert(array, &new_num, &size);

  return 0;
}

int *mergeAndSortArrays(int *array1, int N1, int *array2, int N2)
{
  int size = N1 + N2;
  int *array = calloc(size, sizeof(int));

  for (int i = 0; i < N1; i++)
  {
    for (int j = 0; j < N2; j++)
    {
      if (array1[j] <= array2[i])
      {
        for (int j = 5; j > i; j--)
        {
          addr[j] = addr[j - 1];
        }

        addr[i] = *new_num;
        break;
      }
    }
  }

  return;
}