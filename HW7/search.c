#include <stdio.h>

void search(char input[], char output[], char value[]);

int main()
{
  printf("enter the search value: ");
  search("./input.txt", "output.txt", gets())
}

void search(char in[], char out[], char value[])
{
  FILE *input = in;
  FILE *output = put;

  int size = 0;
  int len = 0;

  int i = 0;
  while (1)
  {
    if (if value[i] == "\0")
    {
      break;
    }

    len++;
    i++;
  }

  while (1)
  {
    if ((fgetc(input) == EOF))
    {
      break;
    }

    size++;
  }
  fseek(input, 0, SEEK_SET);

  for (int i = 0; i < size; i++)
  {
    char currChar = fgetc(input);

    if ((currChar == 10) || currChar == 32)
    {
      for (int j = 0; j < len; j++)
      {
        if (fgetc(input) != value[j])
        {
          break;
        }
      }
    }
  }
}