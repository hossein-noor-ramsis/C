#include "../includes/main.h"

USER_NODE *createUserNode(SYSTEM *System, char username[50], char password[50])
{
  // initialize
  MESSAGE_NODE *messages = calloc(1, sizeof(MESSAGE_NODE));
  messages->next = NULL;

  CHAT_NODE *chats = calloc(1, sizeof(CHAT_NODE));
  chats->next = NULL;
  chats->messages = messages;

  USER_NODE *user = calloc(1, sizeof(USER_NODE));
  USER_NODE *temp = System->users;

  if (temp != NULL) // iterate the user node and find the last node
  {
    while (temp->next != NULL)
    {
      temp = temp->next;
    }

    temp->next = user;
  }
  else // init the head of user node
  {
    temp = user;
  }

  // assign values to the chat node
  strcpy(user->username, username);
  strcpy(user->password, password);
  user->next = NULL;
  user->chats = chats;

  return user;
}
