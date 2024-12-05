#include <stdio.h>

int sum = 0; // global variable

int DigitSum(int n)
{
  if (n != 0)
  {
    // * sum the last digit in the number of n with the sum variable
    sum += n % 10;

    // * remove the last digit in the number of n
    n = (n - (n % 10)) / 10;

    // * call the DigitSum function with new value of n
    DigitSum(n);
  }

  return sum;
}

int main()
{
  int n;

  scanf("%d", &n);
  printf("digits sum = %d\n", DigitSum(n));

  return 0;
}