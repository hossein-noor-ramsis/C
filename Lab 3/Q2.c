#include <stdio.h>

/* int main()
{
  int x = 1, y = 0, z = 4;
  int a = x && y++;

  printf("x= %d\ny= %d\nz= %d\na= %d\n", x, y, z, a);

  return 0;
} */

//* a = 0

/* ===== secttion ====== */

/* int main()
{
  int x = 1, y = 0, z = 4;
  int a = x && ++y;

  printf("x= %d\ny= %d\nz= %d\na= %d\n", x, y, z, a);

  return 0;
} */

//* a = 1

/* ===== secttion ====== */

int main()
{
  int x = 1, y = 0, z = 4;
  int a = --x && y || (z >>= 2);

  printf("x= %d\ny= %d\nz= %d\na= %d\n", x, y, z, a);

  return 0;
}

//* a = 1, z = 1
