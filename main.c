#include <stdio.h>
void function(char **);

int main()
{
  char *arr[] = {"icsp", "fall", "1403", "hw", "6", "pointers"};
  function(arr);

  return 0;
}

void function(char **ptr)
{
  char *ptr1;
  //* ptr: is the pointer to the first string in array

  ptr1 = (ptr += sizeof(int))[-2];
  //* ptr = ptr + 4: ptr is a pointer to the fifth string in array
  //* and when it be ptr[-2] thant mean the third string in array

  printf("%s\n", ptr1);
  //* and at end we printing the string "1403"
}