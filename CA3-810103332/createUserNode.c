#include "main.h"

USER_NODE *createUserNode(SYSTEM *System, char username[50], char password[50])
{
  USER_NODE *user = malloc(sizeof(USER_NODE));
  USER_NODE *temp = System->users;

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
