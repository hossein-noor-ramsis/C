#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "main.h"

int replaceNextlinesWithCommas(const char *in, const char *out);

int main()
{
  replaceNextlinesWithCommas("./input.txt", "./output.txt");
}

int replaceNextlinesWithCommas(const char *in, const char *out)
{
  int status = 1;
  int size = 0;

  FILE *input;
  FILE *output;

  input = fopen(in, "r");
  output = fopen(out, "w");

  if ((input == NULL) || (output == NULL))
  {
    printf("Could not open file\n");
  }

  while (1)
  {
    if (fgetc(input) == EOF)
    {
      break;
    }

    size++;
  }

  fseek(input, 0, SEEK_SET);

  for (int i = 0; i < size; i++)
  {
    char firstChar = fgetc(input);

    if (firstChar == 10)
    {
      fputc(',', output);
      fputc(' ', output);

      status = 0;
    }
    else
    {
      fputc(firstChar, output);
    }
  }

  fclose(input);
  fclose(output);

  return status;
}
