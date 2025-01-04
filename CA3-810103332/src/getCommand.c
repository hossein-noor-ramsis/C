#include "../includes/main.h"

int getCommand(char *command)
{
  // initialize
  unsigned int size = 1;
  char temp = ' ';

  // get command by dynamic array
  printf("Enter Command: ");

  while (1)
  {
    temp = (char)getchar();

    if (temp == '\n')
    {
      break;
    }

    command[size - 1] = temp;
    size++;
    realloc(command, size * sizeof(char));
  }

  command[size - 1] = '\0';

  return 0;
}