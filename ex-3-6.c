#include <stdio.h>
#include <string.h>

void itoa(int n, char s[], int w);
void reverse(char s[]);

int main() {
    int n = 67;
    char s[1000];
    int w = 12;
    itoa(n, s, w);
    printf("%s\n", s);
    return 0;
}

void itoa(int n, char s[], int w) {
    int i, j, sign;
    if ((sign = n) < 0) {
        n = -n;
    }
    i = j = 0;
    do {
        s[i++] = n % 10 + '0';
        j++;
    } while ((n /= 10) > 0);
    if (sign < 0) {
        s[i++] = '-';
        j++;
    }
    while (j < w) {
        s[i++] = ' ';
        j++;
    }
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[]) {
    int c, i, j;
    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}