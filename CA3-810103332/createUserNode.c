#include "main.h"

USER *createUserNode(SYSTEM *System, char username[50], char password[50])
{
  USER *user = malloc(sizeof(USER));
  USER *temp = System->users;

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
