#include "../includes/main.h"

CHAT_NODE *searchChatNode(SYSTEM *System, char chatName[50])
{
  CHAT_NODE *temp = System->user->chats;

  while (temp->next != NULL)
  {
    if (strcmp(temp->name, chatName) == 0)
    {
      return temp;
    }

    temp = temp->next;
  }

  return temp;
}