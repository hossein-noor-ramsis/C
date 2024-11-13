#include <stdio.h>

int main()
{
  int num, result = 0;

  printf("Enter your number: ");
  scanf("%d", &num);

  while (num != 0)
  {
    result = (result * 10) + (num % 10);
    num = (num - (num % 10)) / 10;
  }

  printf("result: %d\n", result);
}
