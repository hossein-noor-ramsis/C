#include <stdio.h>

int function(int);

int main()
{
  int a;
  scanf("%d", &a);

  // * the if statement will run if the condition is true
  // * if a is EVEN, then the function will return 1
  // * the number 1 means true, number 0 means false and all other numbers means true
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
