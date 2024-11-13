#include <stdio.h>

int main()
{
  int n;
  int value = 1;

  while (value)
  {
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d\n", n);

    if (n == 0)
    {
      printf("You have exited successfully!\n");
      break;
    }
  }
}
