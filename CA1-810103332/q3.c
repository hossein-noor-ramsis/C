#include <stdio.h>

int main()
{
  /* init */
  int amount = 0;
  char operation;

  int result = 0;

  /* input */
  scanf("%c %d", &operation, &amount);
  // printf("");

  if (operation == '*')
  {
    result = 1;

    for (int i = 0; i < amount; i++)
    {
      int temp;
      scanf("%d", &temp);

      result *= temp;
    }

    /* output */
    printf("%d\n", result);
    return 0;
  }

  if (operation == '+')
  {
    result = 0;

    for (int i = 0; i < amount; i++)
    {
      int temp;
      scanf("%d", &temp);

      result += temp;
    }

    /* output */
    printf("%d\n", result);
    return 0;
  }

  /* output */
  printf("Wrong Symbol\n");
  return 0;
}