#include <stdio.h>

char oldLower(char c);
char lower(char c);

int main() {
    char c = 'B';
    printf("%c %c %c\n", c, oldLower(c), lower(c));
    return 0;
}

char oldLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}

char lower(char c) {
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}


