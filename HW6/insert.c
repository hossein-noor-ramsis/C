#include <stdio.h>
#include <stdlib.h>

void insert(int *addr, int *new_num, int *size);

int main()
{
  int size = 5;

  int *array = calloc(size, sizeof(int));
  int new_num = -5;

  for (int i = 0; i < size; i++)
  {
    array[i] = i * 2;
  }

  insert(array, &new_num, &size);

  return 0;
}

void insert(int *addr, int *new_num, int *size)
{
  *size = *size + 1;
  realloc(addr, *size * sizeof(int));

  addr[*size - 1] = *new_num;

  for (int i = 0; i < *size - 1; i++)
  {
    if (*new_num <= addr[i])
    {
      for (int j = 5; j > i; j--)
      {
        addr[j] = addr[j - 1];
      }

      addr[i] = *new_num;
      break;
    }
  }

  printf("\n");
  for (int i = 0; i < *size; i++)
  {
    printf("% d", addr[i]);
  }
  printf("\n");

  return;
}