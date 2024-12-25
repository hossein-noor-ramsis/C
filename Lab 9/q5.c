#define NUM_OF_NODES 3

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
  int data;
  struct node *next;
} node;

node *CreateNode();

int main()
{
  node *head, *temp;

  // Allocating memory
  head = CreateNode();
  head->data = 3;

  temp = head;

  for (int i = 0; i < NUM_OF_NODES; i++)
  {
    temp->next = CreateNode();
    temp->next->data = i;

    temp = temp->next;
  }

  temp->next = NULL;

  return 0;
}

node *CreateNode()
{
  return malloc(sizeof(node));
}
