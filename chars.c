#include <stdio.h>

int main() {
    long nc;
    nc = 0;
    int c = getchar();
    while (c != EOF) {
        ++nc;
        c = getchar();
    }
    printf("%ld\n", nc);
}