#include <stdio.h>

int function(int);

int main()
{
  int a;
  scanf("%d", &a);

  // * a is the argument which sent to the function
  if (function(a))
  {
    printf("EVEN (ZOJ)!\n");
  }

  return 0;
}

int function(int n)
{
  // * n is the parameter

  if (n % 2 == 0)
  {
    return 1;
  }

  printf("ODD (FARD)!\n");
}

// * the value of argument will be assigned to the parameter like n = a 
