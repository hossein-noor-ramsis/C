#include "main.h"

USER_NODE *searchUserNode(SYSTEM *System, char username[50])
{
  USER_NODE *temp = System->users;

  while (temp->next != NULL)
  {
    if (strcmp(temp->username, username) == 0)
    {
      return temp;
    }

    temp = temp->next;
  }

  return temp;
}
