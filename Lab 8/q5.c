#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_FILE_ADDRESS "Input.txt"

int main()
{
  FILE *input = fopen(INPUT_FILE_ADDRESS, "a");
  char *text = "\nwe love coding!!";

  // fwrite(text, 1, 18, input);
  fprintf(input, text);
  fclose(input);

  return 0;
}