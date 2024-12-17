#include <stdio.h>
#include <stdlib.h>
#define SIZE_OF_ARRAY 19
#define OUTPUT_FILE_ADDRESS "MyArray.txt"

char *array_producer()
{
  char *array = (char *)calloc(SIZE_OF_ARRAY, sizeof(char));

  for (int i = 0; i < 19; i += 2)
  {
    array[i] = (65 + i / 2);
    array[i + 1] = (32);
  }

  return array;
}

int main()
{
  char *the_array = array_producer();
  FILE *output;

  output = fopen("./out.txt", "w");
  fwrite(the_array, sizeof(char), SIZE_OF_ARRAY, output);
  fclose(output);

  return 0;
}