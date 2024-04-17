void print_char(char c);

char *my_char_replace(char *origin, char toFind, char toReplace) {
    int len = 0;
    while (origin[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len; i++){
        if (origin[i] == toFind) {
            origin[i] = toReplace;
        }
    }
    return origin;
}
