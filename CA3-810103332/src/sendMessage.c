#include "../includes/main.h"

int sendMessage(SYSTEM *System)
{
  // initialize
  char messageContent[256];
  char receiver[50];

  // validation
  if (System->chat == NULL)
  {
    printf("Error: No chat selected. please select a chat\n");
    return 1;
  }

  // get the message content
  strcpy(receiver, System->chat->receiver);

  printf("Receiver: %s\n", receiver);
  printf("Enter message: ");
  gets(messageContent);

  // create the message node for each user chat
  createMessageNode(System, System->user->username, receiver, System->chat->name, messageContent);
  createMessageNode(System, receiver, receiver, System->chat->name, messageContent);

  return 0;
}