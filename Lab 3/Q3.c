#include <stdio.h>

int main()
{
  int x = 1, y = 0, z = 4;
  int a = --x && y || (z >>= 2);

  !a ? printf("%d\n", z) : printf("%d\n", ++z);
  return 0;
}

//* a = 1 => a = true
//* !a => a = false
//* false ? printf("%d\n", z) : printf("%d\n", ++z) => printf("%d\n", ++z)
//* z = 1 => ++z = 2
//* printf("%d\n", ++z) => 2
