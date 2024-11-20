#include <stdio.h>

int isArmstrong(int n);

    int main()
{
  /* init */
  int num = 0;
  int result = 0;

  /* input */
  printf("Enter your number: ");
  scanf("%d", &num);
  result = isArmstrong(num);

  /* output */
  printf("result: %d\n", result);

  return 0;
}

int isArmstrong(int n)
{
  int sum = 0;
  int length = 0;

  for (int i = n; i != 0;)
  {
    i = (i - (i % 10)) / 10;
    length++;
  }

  for (int i = n; i != 0;)
  {
    int digit = (i % 10);
    int poweredNumber = 1;

    i = (i - digit) / 10;

    for (int j = 0; j < length; j++)
    {
      poweredNumber = poweredNumber * digit;
    }

    sum = sum + poweredNumber;
  }

  if (sum == n)
  {
    return 1;
  }

  return 0;
}
