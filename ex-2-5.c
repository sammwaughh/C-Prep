#include <stdio.h>

int any(char s1[], char s2[]);
int contains(char s1[], char c);

int main() {
    char s1[] = "abcdefg";
    char s2[] = "send";
    printf("s1 is %s, s2 is %s, and any(s1,s2) = %d\n", s1, s2, any(s1,s2));
    return 0;
}

int any(char s1[], char s2[]) {
    for (int i = 0; s1[i] != '\0'; i++) {
        if (contains(s2, s1[i])) {
            return i;
        }
    }
    return -1;
}

int contains(char s[], char c) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return 1;
        }
    }
    return 0;
}
