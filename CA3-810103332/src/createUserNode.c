#include "../includes/main.h"

USER_NODE *createUserNode(SYSTEM *System, char username[50], char password[50])
{
  MESSAGE_NODE *messages = calloc(1, sizeof(MESSAGE_NODE));
  messages->next = NULL;

  CHAT_NODE *chats = calloc(1, sizeof(CHAT_NODE));
  chats->next = NULL;
  chats->messages = messages;

  USER_NODE *user = calloc(1, sizeof(USER_NODE));
  USER_NODE *temp = System->users;

  if (temp != NULL)
  {
    while (temp->next != NULL)
    {
      temp = temp->next;
    }

    temp->next = user;
  }
  else
  {
    temp = user;
  }

  strcpy(user->username, username);
  strcpy(user->password, password);
  user->next = NULL;
  user->chats = chats;

  return user;
}
