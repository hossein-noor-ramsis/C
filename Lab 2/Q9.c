#include <stdio.h>
#define PI 3.141593

int main()
{
  double r;

  printf("Please enter the value of r:\n");
  scanf("%lf", &r);

  printf("The area is: %lf\n", (PI * r * r));
  printf("The circumference is: %lf\n", (2 * PI * r));

  return 0;
}
