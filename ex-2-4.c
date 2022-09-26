#include <stdio.h>

void squeeze(char s1[], char s2[]);
int contains(char s1[], char c);

int main() {
    char s1[] = "apple";
    char s2[] = "pear";
    printf("Before squeeze, s1 is %s and s2 is %s\n", s1, s2);
    squeeze(s1, s2);
    printf("After squeeze, s1 is now %s\n", s1);
    return 0;
}

void squeeze(char s1[], char s2[]) {
    int i, j;
    for (i = j = 0; s1[i] != '\0'; i++) {
        if (!contains(s2, s1[i])) {
            s1[j++] = s1[i];
        }
    }
    s1[j] = '\0';
}

int contains(char s[], char c) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return 1;
        }
    }
    return 0;
}
