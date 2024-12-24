#include <stdio.h>
#include <stdlib.h>
#define NUM_OF_NODES 3
typedef struct node
{
  int data;
  struct node *next;
} node;

node *CreateNode()
{
  return malloc(sizeof(node));
}

int main()
{
  node *head, *temp;

  // Allocating memory
  head = CreateNode();
  head->data = 0;

  temp = head;

  for (int i = 0; i < NUM_OF_NODES; i++)
  {
    temp->next = CreateNode();
    temp->next->data = i + 1;

    temp = temp->next;
  }

  temp->next = NULL;

  return 0;
}