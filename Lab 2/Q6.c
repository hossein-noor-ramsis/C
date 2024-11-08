#include <stdio.h>

int main()
{
  float x;
  printf("Enter a decimal number:\n");
  scanf("%d", &x);
  printf("%f\n", x);
}

// 5 => 0.000000
// 1092091904 => 9.500000
// 9.5 => 0 10000010 00110000000000000000000 => 1092091904
