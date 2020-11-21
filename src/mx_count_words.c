#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
    int words = 0;
    bool space = false;
    for (int i = 0; str[i] != '\0'; i++) {
        if (space == false && str[i] == c) {
            words++;
            space = true;
        }
        else if (space == true && str[i] == c) space = false;
    }
    return words;
}
