#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void merge(const char *in1, const char *in2, const char *out);

int main()
{
  merge("./input1.txt", "input2.txt", "./merged.txt");
}

void merge(const char *in1, const char *in2, const char *out)
{
  int size1 = 0;
  int size2 = 0;
  int flag1 = 1;
  int flag2 = 1;

  FILE *input1;
  FILE *input2;
  FILE *output;

  input1 = fopen(in1, "r");
  input2 = fopen(in2, "r");
  output = fopen(out, "w");

  if ((input1 == NULL) || (output == NULL) || (input2 == NULL))
  {
    printf("Could not open file\n");
  }

  while (1)
  {
    if ((fgetc(input1) == EOF))
    {
      break;
    }

    size1++;
  }

  while (1)
  {
    if ((fgetc(input2) == EOF))
    {
      break;
    }

    size2++;
  }

  fseek(input1, 0, SEEK_SET);
  fseek(input2, 0, SEEK_SET);

  int i = 0;
  while (flag1 || flag2)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < size1; j++)
      {
        char firstChar = fgetc(input1);

        if (firstChar == EOF)
        {

          flag1 ? fputc('\n', output) : ' ';

          flag1 = 0;
          break;
        }

        if (firstChar == 10)
        {
          fputc(firstChar, output);
          break;
        }
        else
        {
          fputc(firstChar, output);
        }
      }
    }
    else
    {
      for (int j = 0; j < size2; j++)
      {
        char firstChar = fgetc(input2);

        if (firstChar == EOF)
        {
          flag2 ? fputc('\n', output) : ' ';

          flag2 = 0;
          break;
        }

        if (firstChar == 10)
        {
          fputc(firstChar, output);
          break;
        }
        else
        {
          fputc(firstChar, output);
        }
      }
    }

    i++;
  }

  fclose(input1);
  fclose(input2);
  fclose(output);

  return;
}
