#include "../includes/main.h"

int sendMessage(SYSTEM *System)
{
  MESSAGE_NODE *temp;

  char messageContent[256];
  char receiver[50];

  if (System->chat == NULL)
  {
    printf("Error: No chat selected. please select a chat\n");
    return 1;
  }

  if (strcmp(System->user->username, System->chat->users[0]) == 0)
  {
    strcpy(receiver, System->chat->users[1]);
  }
  else
  {
    strcpy(receiver, System->chat->users[0]);
  }

  printf("Receiver: %s\n", receiver);
  printf("Enter message: ");
  gets(messageContent);

  //TODO: Tony and Eric have different linked list of chats 
  //TODO: Tony and Eric dont have a different linked list of message for each chat

  temp = System->chat->messages;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = createMessageNode(System, messageContent);

  temp = searchChatNode(System, receiver, System->chat->name)->messages;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = createMessageNode(System, messageContent);

  return 0;
}