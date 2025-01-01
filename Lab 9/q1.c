#include <stdio.h>
#include <stdlib.h>

typedef struct information
{
  float weight;
  float height;
} information;

int main()
{
  information *person_1 = (information *)malloc(sizeof(information));
  //* you need to get memory from the heap

  printf("Please enter weight : \n");
  scanf("%f", &person_1->weight);

  printf("Please enter height : \n");
  scanf("%f", &person_1->height);

  printf("Weight: %.2f, Height: %.2f\n", person_1->weight, person_1->height);

  free(person_1);
  return 0;
}
