#include "../includes/main.h"

CHAT_NODE *createMessageNode(SYSTEM *System, char message[256])
{
  USER_NODE *user = malloc(sizeof(USER_NODE));
  USER_NODE *temp = System->users;

  CHAT_NODE *chats = malloc(sizeof(CHAT_NODE));
  chats->next = NULL;
  user->chats = chats;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  temp->next = user;

  strcpy(user->username, username);
  strcpy(user->password, password);
  user->next = NULL;

  return user;
}
