#include <stdio.h>

int main() {
    int c = getchar();
    while (c != EOF) {
        if (c == '\t' || c == ' ') {
            putchar('\n');
        } else {
            putchar(c);
        }
        c = getchar();
    }
    return 0;
}