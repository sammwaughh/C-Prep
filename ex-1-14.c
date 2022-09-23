#include <stdio.h>

int main() {
    int characters[128];
    for (int i = 0; i < 128; ++i) {
        characters[i] = 0;
    }
    int c = getchar();
    while (c != EOF) {
        ++characters[c];
    }
    int size;
    for (int i = 1; i < 128; ++i) {
        size = characters[i];
        printf("%d\t", i);
        for (int j = 0; j < size; ++j) {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}