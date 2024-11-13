#include <stdio.h>

int main()
{
  int a = 5 | (12 & (3 + (8 * 2) - 7));                // 13
  int b = 10 ^ ((5 + (3 * 2) - 8) << 1);               // 12
  int c = ((12 >> ((3 & 5) + 7)) ^ ((3 * 2) - 1)) | 8; // 13

  printf("a: %d\n", a);
  printf("b: %d\n", b);
  printf("c: %d\n", c);

  return 0;
}

// Hossein Noor Ramsis
// 810103332
