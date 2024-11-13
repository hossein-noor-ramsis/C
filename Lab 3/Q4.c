#include <stdio.h>

int main()
{
  //! infinite for loop

  for (int i = 1; ;)
  {
    printf("%d ", i);
    if (i % 2 == 0)
    {
      printf("is even!\n");
    }
    else
    {
      printf("is odd!\n");
    }
  }

  return 0;
}
