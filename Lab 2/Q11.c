#include <stdio.h>

int main()
{
  char x;

  printf("Enter a number:\n");
  // scanf("%d", &x);
  // format '%d' expects argument of type 'int *', but argument 2 has type 'char *' [-Wformat=]gcc
  // 3 => ❤️

  scanf("%c", &x);
  // 3 => 3

  printf("%c\n", x);
}
