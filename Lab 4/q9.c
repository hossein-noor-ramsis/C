#include <stdio.h>
float function(float cal, float phy, float lab);

int main()
{
  float cal = 18, phy = 17, lab = 19;
  printf("average = %f\n", function(lab, cal, phy));

  return 0;
}

float function(float cal, float phy, float lab)
{
  float sum = (cal * 3) + (phy * 2) + (lab * 1);
  float average = sum / 6;

  return average;
}

// * average = 18.333334
// * true answer was: average = 17.833334
// * so you need to save the true order of arguments
