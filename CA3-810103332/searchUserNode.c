#include "main.h"

USER *searchUserNode(SYSTEM *System, char username[50])
{
  USER *temp = System->users->next;

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