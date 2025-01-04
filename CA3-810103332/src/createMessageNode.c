#include "../includes/main.h"

MESSAGE_NODE *createMessageNode(SYSTEM *System, char username[50], char receiver[50], char chatName[50], char messageContent[256])
{
  // initialize
  CHAT_NODE *chat;
  MESSAGE_NODE *temp;
  MESSAGE_NODE *message = calloc(1, sizeof(MESSAGE_NODE));

  // find chat node of selected user
  chat = searchChatNode(System, username, chatName);
  temp = chat->messages;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  message = calloc(1, sizeof(MESSAGE_NODE));
  temp->next = message;

  // assign values to the message node
  message->next = NULL;
  strcpy(message->sender, System->user->username);
  strcpy(message->receiver, receiver);
  strcpy(message->chatName, chatName);
  strcpy(message->content, messageContent);

  return message;
}
