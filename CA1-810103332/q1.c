#include <stdio.h>

int main()
{
  /* init */
  int rows, cols = 1;

  int positive = 0;
  int negative = 0;
  int absent = 0;

  char result = ' ';

  /* input */
  scanf("%d %d", &rows, &cols);

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      char status = ' ';
      scanf(" %c", &status);

      if (status == 'P')
      {
        positive++;
        continue;
      }

      if (status == 'N')
      {
        negative++;
        continue;
      }

      if (status == 'A')
      {
        absent++;
        continue;
      }
    }
  }

  if (positive > negative)
  {
    result = 'P';
  }
  else if (negative > positive)
  {
    result = 'N';
  }
  else
  {
    result = 'A';
  }

  /* output */
  printf("Positive: %d\n", positive);
  printf("Negative: %d\n", negative);
  printf("Absent: %d\n", absent);
  printf("P: %.2f %%\n", (float)positive / ((float)positive + (float)negative) * 100);
  printf("N: %.2f %%\n", (float)negative / ((float)positive + (float)negative) * 100);
  printf("Result: %c\n", result);

  return 0;
}