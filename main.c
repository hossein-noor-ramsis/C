#include <stdio.h>

int NumberofWays(int);
int fact(int);

int main()
{
  /* init */
  int num = 0;
  int result = 0;

  /* input */
  printf("Enter your number: ");
  scanf("%d", &num);
  result = NumberofWays(num);

  /* output */
  printf("result: %d\n", result);

  return 0;
}

int NumberofWays(int n)
{
  int oneObstacle = n;
  int twoObstacles = 0;

  int result = 0;

  while (oneObstacle > 0)
  {
    if (twoObstacles == 0)
    {
      result++;
    }
    else
    {
      result += fact(oneObstacle + twoObstacles);
    }

    oneObstacle -= 2;
    twoObstacles++;
  }

  return result;
}

int fact(int n)
{
  int result = 1;

  for (int i = 1; i <= n; i++)
  {
    result *= i;
  }

  return result;
}

// 1 & 2, 1 & 3, 2 & 3
