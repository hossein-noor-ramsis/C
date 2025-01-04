#include "../includes/main.h"

CHAT_NODE *searchChatNode(SYSTEM *System, char *username, char chatName[50])
{
  // initialize
  USER_NODE *selectedUser = searchUserNode(System, username);
  CHAT_NODE *temp = selectedUser->chats;

  // find chat node
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