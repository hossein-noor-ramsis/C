#include <stdio.h>

int main()
{
  /* input */
  int rows, cols = 1;

  int positive = 0;
  int negative = 0;
  int absent = 0;

  scanf("%d %d", &rows, &cols);
  fflush(stdin);

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      char status = ' ';
      scanf("%c", &status);
      fflush(stdin);

      if (status == 'P')
      {
        positive++;
        // printf("TEST j: %d\n", j);

        // printf("TEST: %d\n", positive);

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

  /* output */
  printf("Positive: %d\n", positive);
  printf("Negative: %d\n", negative);
  printf("Absent: %d\n", absent);
  printf("P: %.2f %%\n", (float)positive / ((float)positive + (float)negative + (float)absent) * 100);
  printf("N: %.2f %%\n", (float)negative / ((float)positive + (float)negative + (float)absent) * 100);
  printf("Result: %c\n", (positive > negative) ? 'P' : 'N');

  return 0;
}