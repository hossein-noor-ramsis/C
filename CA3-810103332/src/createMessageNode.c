#include "../includes/main.h"

MESSAGE_NODE *createMessageNode(SYSTEM *System, char selectedUsername[50], char chatName[50], char messageContent[256])
{
  CHAT_NODE *chat;
  MESSAGE_NODE *temp;
  MESSAGE_NODE *messageOne = malloc(sizeof(MESSAGE_NODE));
  MESSAGE_NODE *messageTwo = malloc(sizeof(MESSAGE_NODE));

  // create the message for the chat of user 1
  chat = searchChatNode(System, System->user->username, chatName);
  temp = chat->messages;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  messageOne = malloc(sizeof(MESSAGE_NODE));
  temp->next = messageOne;

  messageOne->next = NULL;
  messageOne->author = System->user;
  messageOne->chat = System->chat;
  strcpy(messageOne->content, messageContent);

  // create the message for the chat of user 2
  chat = searchChatNode(System, selectedUsername, chatName);
  temp = chat->messages;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  messageTwo = malloc(sizeof(MESSAGE_NODE));
  temp->next = messageTwo;

  messageTwo->next = NULL;
  messageTwo->author = System->user;
  messageTwo->chat = System->chat;
  strcpy(messageTwo->content, messageContent);

  return messageOne;
}
