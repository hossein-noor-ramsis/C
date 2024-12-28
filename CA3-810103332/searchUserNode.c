#include "main.h"

USER *searchUserNode(USER *usersHead, char username[32])
{
  USER *temp = usersHead->next;

  while (temp != NULL)
  {
    if (strcmp(temp->username, username) == 0)
    {
      return temp;
    }

    temp = temp->next;
  }

  return temp;
}