typedef struct USER
{
  char username[32];
  char password[32];

  struct USER *next;
} USER;
