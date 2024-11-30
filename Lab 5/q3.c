#include <stdio.h>
int main()
{
  int x = 2;
  int arr[5];
  
  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int j = (sizeof(arr) / sizeof(int)) - 1; j >= 0; j--)
  {
    printf("%d ", arr[j]);
  }

  return 0;
}
