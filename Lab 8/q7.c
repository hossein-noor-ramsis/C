#include <stdio.h>
#include <string.h>

#define INPUT_FILE_ADDRESS "Input.txt"

int main()
{
  FILE *input = fopen(INPUT_FILE_ADDRESS, "r+");
  char *text = "\nNow we know how to use files in C :)";

  fseek(input, 0, SEEK_END);
  fprintf(input, text);
  fclose(input);

  return 0;
}