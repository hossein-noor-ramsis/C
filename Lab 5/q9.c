#include <stdio.h>
#include <string.h>

int main()
{
  char str1[] = "hello world";
  char str2[] = "hello world"; // define str2
  gets(str2); // input str2

  if (strcmp(str1, str2) == 0)
  {
    printf("YES!\n");
  }
  else
  {
    printf("NO!\n");
  }
  
  return 0;
}
