#include <stdio.h>

// int main()
// {
//   char str1[5] = "hello";
//   printf("string 1 = %s\n", str1);

//   char str2[6] = "hello";
//   printf("string 2 = %s\n", str2);

//   return 0;
// }

int main()
{
  char str1[] = {'h', 'e', 'l', 'l', 'o'};
  // * by this declaration you should add the null (\n) at the end of the string
  printf("string 1= %s\n", str1);

  char str2[] = {'h', 'e', 'l', 'l', 'o', '\0'};
  printf("string 2= %s\n", str2);

  return 0;
}


