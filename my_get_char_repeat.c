void print_char(char c);

int my_get_char_repeat(char to_find, const char *to_search) {
    int len = 0;
    int iter = 0;
    while (to_search[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len; i++) {
        if (to_search[i] == to_find) {
            iter++;
        }
    }
    return iter;
}
