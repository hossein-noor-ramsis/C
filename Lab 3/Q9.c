#include <stdio.h>

int main()
{
  int a, b;
  printf("please enter two numbers in this format (a b): ");
  scanf("%d %d", &a, &b);

  for (int i = 1; i <= a; i++)
  {
    for (int j = 1; j <= b; j++)
    {
      printf("#\t");
    }
    printf("\n");
  }

  return 0;
}