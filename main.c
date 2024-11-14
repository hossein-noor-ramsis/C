#include <stdio.h>
#include <stdbool.h>

int main()
{
  /* Initialize variabels */
  int startNum, endNum;
  bool isThereAnyPrime = false;

  /* get the interval of numbers from the user */
  printf("Enter your start number: ");
  scanf("%d", &startNum);

  printf("Enter your end number: ");
  scanf("%d", &endNum);

  /* the logic */
  for (int i = startNum + 1; i <= endNum; i++)
  {
    bool isPrime = true;

    if (i == 1)
    {
      continue;
    }

    for (int j = i - 1; j > 2; j--)
    {

      if (i % j == 0)
      {
        isPrime = false;
        break;
      }
    }

    if (isPrime == true)
    {
      if (isThereAnyPrime == false)
      {
        printf("\nThe prime numbers are: ");
      }

      printf("%d ", i);
      isThereAnyPrime = true;
    }
  }

  printf("\n");

  if (isThereAnyPrime == false)
  {
    printf("There are no prime numbers in the (%d, %d] \n", startNum, endNum);
  }

  return 0;
}
