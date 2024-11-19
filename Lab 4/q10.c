#include <stdio.h>

int g(int y)
{
  // * y = 10
  int j = 2;
  y = j * 3;
  // * y = 2 * 3 = 6
  return y;
}

int f(int x)
{
  // * x = 10
  return g(x);
  // * g() will return 6 and the f() will rethrn the same value
}

int main()
{
  int a = 10;
  printf("%d\n", f(a));
  // * the printf() will print the returnd value 6 by f()

  return 0;
}