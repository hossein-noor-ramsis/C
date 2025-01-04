#include "../includes/main.h"

int showChat(SYSTEM *System)
{
  // initialize
  MESSAGE_NODE *temp;

  // validation
  if (System->chat == NULL)
  {
    printf("Error: No chat selected. Please select a chat first.\n");
    return 1;
  }

  // show all messages content int the selected chat
  temp = System->chat->messages->next;
  printf("Messages in Chat '%s':\n", System->chat->name);

  while (temp != NULL)
  {
    printf("%s: ", temp->sender);
    printf("%s\n", temp->content);

    temp = temp->next;
  }

  return 0;
}