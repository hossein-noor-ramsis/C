#define NUM_OF_PARTICIPANTS 3

#include <stdio.h>
#include <stdlib.h>

typedef struct information
{
  float weight;
  float height;
} information;

void getInformation(information *person_ptr);
void printInformation(information *person_ptr);

int main()
{
  information *persons = malloc(NUM_OF_PARTICIPANTS * sizeof(information));

  getInformation(persons);
  printInformation(persons);

  return 0;
}

void getInformation(information *person_ptr)
{
  for (int i = 0; i < NUM_OF_PARTICIPANTS; i++)
  {
    printf("Please enter weight for participant %d: \n", i + 1);
    scanf("%f", &person_ptr[i].weight);

    printf("Please enter height for participant %d: \n", i + 1);
    scanf("%f", &person_ptr[i].height);
  }
}

void printInformation(information *person_ptr)
{
  for (int i = 0; i < NUM_OF_PARTICIPANTS; i++)
  {
    printf("participant %d's information :\n", i + 1);

    printf("weight : % f\n", (person_ptr + i)->weight);
    printf("height : % f\n", person_ptr[i].height);
  }
}