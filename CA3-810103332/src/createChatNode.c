#include "../includes/main.h"

CHAT_NODE *createChatNode(SYSTEM *System, char selectedUsername[50], char chatName[50])
{
  USER_NODE *user;

  CHAT_NODE *temp;
  CHAT_NODE *chatOne = malloc(sizeof(CHAT_NODE));
  CHAT_NODE *chatTwo = malloc(sizeof(CHAT_NODE));

  MESSAGE_NODE *messages;

  // create the chat for the user 1
  user = System->user;
  temp = user->chats;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = chatOne;

  messages = malloc(sizeof(MESSAGE_NODE));
  messages->next = NULL;
  chatOne->messages = messages;

  strcpy(chatOne->name, chatName);
  strcpy(chatOne->users[0], System->user->username);
  strcpy(chatOne->users[1], selectedUsername);
  chatOne->next = NULL;

  // create the chat for the user 2
  user = searchUserNode(System, selectedUsername);
  temp = user->chats;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = chatTwo;

  messages = malloc(sizeof(MESSAGE_NODE));
  messages->next = NULL;
  chatTwo->messages = messages;

  strcpy(chatTwo->name, chatName);
  strcpy(chatTwo->users[0], selectedUsername);
  strcpy(chatTwo->users[1], System->user->username);
  chatTwo->next = NULL;

  return chatOne;
}
