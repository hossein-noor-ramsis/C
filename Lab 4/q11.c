#include <stdio.h>
int main()
{
  int z = 4;

  if (z - 4)
  {
    int i = 1;
    z = z + i;
    printf("i=%d , z=%d\n", i, z);
  }
  else
  {
    int i = 0;
    z = i + 1;
    // * z = 0 + 1 = 1
    {
      int i = 1;
      z = i + 1;
      // * z = 1 + 1 = 2

      printf("i=%d , z=%d\n", i, z);
      // * in this scope: i = 1, z = 2
    }

    printf("i=%d , z=%d\n", i, z);
    // * in this scope: i = 0, z = 2
  }

  return 0;
}