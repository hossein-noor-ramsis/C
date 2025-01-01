#include <stdio.h>
#include <stdlib.h>
#define NUM_OF_NODES 3
typedef struct node
{
  int data;
  struct node *next;
} node;

node *CreateNode();

int main()
{
  node *first_node, *second_node, *third_node, *head;
  
  // Allocating memory
  head = CreateNode();
  first_node = CreateNode();
  second_node = CreateNode();
  third_node = CreateNode();

  // Assigning data values
  first_node->data = 1;
  second_node->data = 2;
  third_node->data = 3;

  // Connecting nodes
  head->next = first_node;
  first_node->next = second_node;
  second_node->next = third_node;
  third_node->next = NULL;

  printf("head: %d", head->next->next->data);

  return 0;
}

node *CreateNode()
{
  return malloc(sizeof(node));
}
