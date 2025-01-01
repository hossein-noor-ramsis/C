#include "main.h"

int showChat(SYSTEM *System)
{
  MESSAGE_NODE *temp;

  if (System->chat == NULL)
  {
    printf("Error: No char selected. Please select a chat first.\n");
    return 1;
  }

  temp = System->chat->messages;
  printf("Messages in Chat '%s':\n", System->chat->name);

  while (temp->next != NULL)
  {
    printf("%s: ", System->chat->messages->author);
    printf("%s\n", temp->content);

    temp = temp->next;
  }

  return 0;
}