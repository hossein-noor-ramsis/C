#include <stdio.h>

int function(int);

int main()
{
  int a;
  scanf("%d", &a);

  // * the condition of if will check the returned value from the function and not the function itself
  if (function(a))
  {
    printf("EVEN (ZOJ)!\n");
  }

  return 0;
}

int function(int n)
{
  if (n % 2 == 0)
  {
    return 1;
  }

  printf("ODD (FARD)!\n");
}
