#include <stdio.h>

int main()
{
  int x, y;
  scanf("%d %d \n", &x, &y);
  printf("The result is: %d\n", ((x + y) << 2) % 3);
}
