#include <stdio.h>

int main() {
    int c = getchar();
    int wasBlank = 0;
    while (c != EOF) {
        if (wasBlank) {
            if (c == ' ') {
                ;
            } else {
                putchar(c);
            }
        } else {
            putchar(c);
        }

        if (c == ' ') {
            wasBlank = 1;
        } else {
            wasBlank = 0;
        }
        c = getchar();
    }
    return 0;
}