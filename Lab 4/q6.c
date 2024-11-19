#include <stdio.h>

int function(int);

int main()
{
  int a;
  scanf("%d", &a);

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
    // * when we return a value in the function the function will stop run next codes and will get out from the function
    return 1;
  }

  printf("ODD (FARD)!\n");
}
