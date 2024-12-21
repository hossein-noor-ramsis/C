#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int replaceNextlinesWithCommas(const char *in, const char *out);

int main()
{
  replaceNextlinesWithCommas("./names.txt", "./names_plus_grades.txt");
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
    char grade = 0;

    if (firstChar == 58)
    {
      printf("%c ", firstChar);
      fputc(firstChar, output);
      fputc(' ', output);

      while (1)
      {
        scanf("%c", &grade);

        if (grade == '\n')
        {
          break;
        }

        fputc(grade, output);
      }

      status = 0;
    }
    else
    {
      printf("%c", firstChar);
      fputc(firstChar, output);
    }
  }

  fclose(input);
  fclose(output);

  return status;
}
