#include <stdio.h>
int main()
{
  char str[] = "hello world";
  printf("*****\n");
  puts(str);
  printf("*****\n");

  printf("%s", str);
  printf("*****\n");
  
  return 0;
}

// * the puts() function will print an enter (\n) at the end of the string
