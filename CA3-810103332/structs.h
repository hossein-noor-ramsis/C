typedef struct USER
{
  char username[50];
  char password[50];
  struct CHAT *chats;

  struct USER *next;
} USER;

typedef struct MESSAGE
{
  USER author;
  char content[250];

  struct MESSAGE *next;
} MESSAGE;

typedef struct CHAT
{
  char name[50];
  char users[2][50];
  MESSAGE *messages;

  struct CHAT *next;
} CHAT;

typedef struct SYSTEM
{
  USER *users;
  USER *user;
  CHAT *chat;
} SYSTEM;
