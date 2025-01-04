#include "../includes/main.h"

int freeUserNode(USER_NODE *users)
{
  // initialize
  USER_NODE *user = users;
  CHAT_NODE *chat;
  MESSAGE_NODE *message;

  USER_NODE *userTemp;
  CHAT_NODE *chatTemp;
  MESSAGE_NODE *messageTemp;

  // iterate each user chats and messages to free them all
  while (user->next != NULL)
  {
    chat = user->chats;

    while (chat->next != NULL)
    {
      message = chat->messages;

      while (message->next != NULL)
      {
        messageTemp = message->next;
        free(message);
        message = messageTemp;
      }

      chatTemp = chat->next;
      free(chat);
      chat = chatTemp;
    }

    userTemp = user->next;
    free(user);
    user = userTemp;
  }

  free(users);

  return 0;
}