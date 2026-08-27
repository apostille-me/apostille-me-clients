#ifndef APOSTILLE_ME_CLIENT_H
#define APOSTILLE_ME_CLIENT_H
#include <stdbool.h>
typedef struct { const char *base_url; const char *bearer_token; } apostille_me_client;
apostille_me_client apostille_me_client_new(const char *base_url, const char *bearer_token);
bool apostille_me_client_health(const apostille_me_client *client);
#endif
