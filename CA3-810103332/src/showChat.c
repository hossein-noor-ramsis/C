#include "../includes/main.h"

int showChat(SYSTEM *System)
{
  MESSAGE_NODE *temp;

  if (System->chat == NULL)
  {
    printf("Error: No chat selected. Please select a chat first.\n");
    return 1;
  }

  temp = System->chat->messages->next;
  printf("Messages in Chat '%s':\n", System->chat->name);

  while (temp->next != NULL)
  {
    printf("%s: ", temp->author->username);
    printf("%s\n", temp->content);

    temp = temp->next;
  }

  return 0;
}