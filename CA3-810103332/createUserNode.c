#include "main.h"

USER *createUserNode(USER *userHead, char username[32], char password[32])
{
  USER *user = malloc(sizeof(USER));
  USER *temp = userHead;

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
