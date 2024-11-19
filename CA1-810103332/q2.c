#include <stdio.h>

int main()
{
  /* init */
  float firstBacteryWeight = 0;
  float seccondBacteryWeight = 0;

  float firstBacteryGrowth = 0;
  float seccondBacteryGrowth = 0;

  int result = 0;

  /* input */
  scanf("%f %f", &firstBacteryWeight, &seccondBacteryWeight);
  scanf("%f %f", &firstBacteryGrowth, &seccondBacteryGrowth);

  if ((firstBacteryWeight <= seccondBacteryWeight) && (firstBacteryGrowth < seccondBacteryGrowth))
  {
    result = -1;
    printf("%d\n", result);

    return 0;
  }

  while (firstBacteryWeight <= seccondBacteryWeight)
  {
    firstBacteryWeight = firstBacteryWeight * firstBacteryGrowth;
    seccondBacteryWeight = seccondBacteryWeight * seccondBacteryGrowth;

    result++;
  }

  /* output */
  printf("%d\n", result);

  return 0;
}
