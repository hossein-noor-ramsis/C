#include "../includes/main.h"

USER_NODE *searchUserNode(SYSTEM *System, char username[50])
{
  // initialize
  USER_NODE *temp = System->users;

  // find user node
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
