#include "main.h"

USER *searchUserNode(SYSTEM *System, char chatName[50])
{
  USER *temp = System->user->chats->name;

  while (temp != NULL)
  {
    if (strcmp(temp->name, chatName) == 0)
    {
      return temp;
    }

    temp = temp->next;
  }

  return temp;
}