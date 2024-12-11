#include <stdio.h>

int main()
{
  char str[50];
  gets(str);

  printf("%s\n", str);
  return 0;
}

//* with gets() you get tab and spaces in the string
//* for gets() the \n (enter) is the delimiter 
