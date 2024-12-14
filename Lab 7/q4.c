#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  char *s;
  int *p = (int *)malloc(10 * sizeof(int));

  for (i = 0; i < 10; i++)
  {
    p[i] = i + 48;
  }

  s = (char *)p; /*1*/
  //* cast the int array to a string and assign it to s variable

  /*2*/
  printf("%c", s[4]);
  printf("%c", s[5]);
  //* nothing prints

  //* int is 4 byte and the numbers in the p are 10 so 10 * 4 = 40
  //* the s will go 1 byte by 1 and that because its type is char
  for (i = 0; i < 40; i++) /*3*/
  {
    printf("%c", s[i]); /*4*/
    //* it converts the 48 to ASCI character because we printing it as %c format
  }

  printf("\n");
  printf("p[0] is %d\n", *p);

  free(p);
  free(s); /*5*/
  //* actually nothing because the address of p and s in memory was same and we free it in prev line

  return 0;
}
