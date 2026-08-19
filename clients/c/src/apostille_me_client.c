#include "apostille_me_client.h"
apostille_me_client apostille_me_client_new(const char *base_url, const char *bearer_token) {
  apostille_me_client value = {base_url, bearer_token}; return value;
}
bool apostille_me_client_health(const apostille_me_client *client) { return client != 0 && client->base_url != 0; }
