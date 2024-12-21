#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int replaceNextlinesWithCommas(const char *in, const char *out);

int main()
{
  replaceNextlinesWithCommas("./input.txt", "./output.txt");
}

int replaceNextlinesWithCommas(const char *in, const char *out)
{
  int status = 1;
  char *buffer = ca;

  FILE *input;
  FILE *output;

  input = fopen(in, "r");
  output = fopen(out, "w");

  if ((input == NULL) || (output == NULL))
  {
    printf("Could not open file\n");
  }

  fgets(buffer, sizeof(buffer), input);

  for (unsigned int i = 0; i < strlen(buffer); i++)
  {
    bool condition1 = buffer[i] == 92;
    bool condition2 = buffer[i + 1] == 110;

    bool flag = condition1 && condition2;

    if (flag)
    {
      buffer[i] = 44;
      buffer[i + 1] = 32;

      status = 0;
    }
  }

  if (status == 0)
  {
    fprintf(output, buffer);
  }

  fclose(input);
  fclose(output);

  return status;
}
