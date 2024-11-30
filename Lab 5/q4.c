#include <stdio.h>

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int arr_copy[5];

  for (unsigned int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    arr_copy[i] = arr[i];
    printf("arr_copy[%d] = %d\n", i, arr_copy[i]);
  }

  return 0;
}
