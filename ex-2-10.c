#include <stdio.h>

int oldLower(int c);
int lower(int c);

int main() {
    int c = 'B';
    printf("%c %c %c\n", c, oldLower(c), lower(c));
    return 0;
}

int oldLower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}

int lower(int c) {
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}


