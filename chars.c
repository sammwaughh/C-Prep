#include <stdio.h>

int main() {
    int b, t, n;
    b = 0;
    t = 0;
    n = 0;
    int c = getchar();
    while (c != EOF) {
        if (c == '\t') {
            ++t;
        }
        if (c == '\n') {
            ++n;
        }
        if (c == ' ') {
            ++b;
        }
        c = getchar();
        //printf("ran")
    }
    printf("Tabs: %d\n", t);
    printf("New Lines: %d\n", n);
    printf("Blanks: %d\n", b);
    return 0;
}