#include <stdio.h>
int fact(int);

int main()
{
  int n;

  scanf("%d", &n);
  printf("%d\n", fact(n));

  return 0;
}

int fact(int number)
{
  int result = 1;

  for (int i = 1; i <= number; i++)
  {
    result *= i;
  }

  return result;
}

// * create the fact function
