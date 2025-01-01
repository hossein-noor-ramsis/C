#include "../includes/main.h"

MESSAGE_NODE *createMessageNode(SYSTEM *System, char messageContent[256])
{
  MESSAGE_NODE *message = malloc(sizeof(MESSAGE_NODE));
  message->next = NULL;
  message->author = System->user;
  message->chat = System->chat;
  strcpy(message->content, messageContent);

  MESSAGE_NODE *temp = System->chat->messages;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  temp->next = message;
  return message;
}
