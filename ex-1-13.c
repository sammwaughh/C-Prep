#include <stdio.h>

int main() {
    int lengths[10];
    for (int i = 0; i < 10; ++i) {
        lengths[i] = 0;
    }
    int c = getchar();
    int inWord;
    if (c == ' ' || c == '\t') {
        inWord = 0;
    } else {
        inWord = 1;
    }
    int length = 0;
    while (c != EOF) {
        /*printf("inWord: %d\t", inWord);
        printf("Length: %d\t", length);
        printf("Char: %d\n", c);*/
        if (inWord) {
            if (c == ' ' || c == '\t') {
                ++lengths[length];
                length = 0;
            } else {
                ++length;
            }
        } 
        if (c == ' ' || c == '\t') {
            inWord = 0;
        } else {
            if (!inWord) {
                length = 1;
            }
            inWord = 1;
        }
        c = getchar();
    }
    ++lengths[length-1];
    int size;
    for (int i = 1; i < 10; ++i) {
        size = lengths[i];
        printf("%d\t", i);
        for (int j = 0; j < size; ++j) {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}