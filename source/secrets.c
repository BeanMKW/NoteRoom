#include <string.h>
#include "secrets.h"

// Server configuration — replace these with your server details.
// NOTE: Avoid committing real credentials. Use empty strings for user/pass
// if you prefer to set them locally.
const char* g_mqtt_broker = "YOUR_MQTT_HOSTNAME_OR_IP";
int g_mqtt_port = 1883;
const char* g_mqtt_user = ""; // set to "" if no username
const char* g_mqtt_pass = ""; // set to "" if no password
const char* g_base_topic = "noteroom";

void init_secrets(void) {
    // Populate variables securely if needed
}

void decrypt_string(char* dest, const char* src, int len, u8 key) {
    for (int i = 0; i < len; i++) {
        dest[i] = src[i] ^ key;
    }
    dest[len] = '\0';
}
