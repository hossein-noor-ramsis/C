#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int replaceNextlinesWithCommas(const char *in, const char *out);

int main()
{
  replaceNextlinesWithCommas("input.txt", "output.txt");
}

int replaceNextlinesWithCommas(const char *in, const char *out)
{
  int status = 1;
  char buffer[100];

  FILE *input;
  FILE *output;

  input = fopen(in, "w");
  output = fopen(out, "w");

  if ((input == NULL) || (output == NULL))
  {
    printf("Could not open file\n");
  }

  fgets(buffer, sizeof(buffer), input);

  for (unsigned int i = 0; i < strlen(buffer); i++)
  {
    bool condition1 = buffer[i] == 110;
    bool condition2 = buffer[i + 1] == 101;
    bool condition3 = buffer[i + 2] == 120;
    bool condition4 = buffer[i + 3] == 116;
    bool condition5 = buffer[i + 4] == 32;
    bool condition6 = buffer[i + 5] == 108;
    bool condition7 = buffer[i + 6] == 105;
    bool condition8 = buffer[i + 7] == 110;
    bool condition9 = buffer[i + 8] == 101;

    bool flag = condition1 && condition2 && condition3 && condition4 && condition5 && condition6 && condition7 && condition8 && condition9;

    if (flag)
    {
      buffer[i] = 44;
      buffer[i + 1] = 44;
      buffer[i + 2] = 44;
      buffer[i + 3] = 44;
      buffer[i + 4] = 44;
      buffer[i + 5] = 44;
      buffer[i + 6] = 44;
      buffer[i + 7] = 44;
      buffer[i + 8] = 44;

      status = 0;
    }
  }

  fprintf(output, buffer);

  fclose(output);
  fclose(input);

  return status;
}