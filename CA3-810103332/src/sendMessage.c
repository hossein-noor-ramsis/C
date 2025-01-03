#include "../includes/main.h"

int sendMessage(SYSTEM *System)
{
  char messageContent[256];
  char receiver[50];

  if (System->chat == NULL)
  {
    printf("Error: No chat selected. please select a chat\n");
    return 1;
  }

  strcpy(receiver, System->chat->receiver);

  printf("Receiver: %s\n", receiver);
  printf("Enter message: ");
  gets(messageContent);

  createMessageNode(System, System->user->username, receiver, System->chat->name, messageContent);
  createMessageNode(System, receiver, receiver, System->chat->name, messageContent);

  return 0;
}