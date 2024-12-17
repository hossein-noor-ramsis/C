#include <stdio.h>
#include <stdlib.h>

#define INPUT_FILE_ADDRESS "./Input.txt"
#define OUTPUT_FILE_ADDRESS "./output.txt"

char *read_input_file(int length);
char *reverse_array(char *in_order_array, int length);
void write_reversed_array_in_file(char *in_order_array, int length);

char *read_input_file(int length)
{
  char *in_order_array = (char *)malloc(length * sizeof(char));
  FILE *input = fopen(INPUT_FILE_ADDRESS, "r");

  fread(in_order_array, 1, length, input);
  fclose(input);

  return in_order_array;
}

char *reverse_array(char *in_order_array, int length)
{
  char *reversed_array = (char *)malloc(length * sizeof(char));

  for (int i = 0, j = length - 1; i < length; i++, j--)
  {
    *(reversed_array + i) = *(in_order_array + j);
  }

  return reversed_array;
}

void write_reversed_array_in_file(char *in_order_array, int length)
{
  char *reversed_array = reverse_array(in_order_array, length);
  FILE *output;

  output = fopen(OUTPUT_FILE_ADDRESS, "w");
  fwrite(reversed_array, 1, length, output);

  fclose(output);
}

int main()
{
  FILE *input = fopen(INPUT_FILE_ADDRESS, "r");
  char temp;
  int length = 0;

  while (1)
  {
    temp = getc(input);
    printf("%c", temp);
    //* gets the char which the pointer of file in on it and save it in temp

    if (feof(input))
    {
      break;
    }

    length++;
  }

  fclose(input);
  printf("%d\n", length);

  // =====
  char *in_order_array = read_input_file(length);
  write_reversed_array_in_file(in_order_array, length);

  return 0;
}
