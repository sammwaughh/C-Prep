#include <stdio.h>
#include <string.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main() {
    char s[1000];
    int n = 105;
    int b = 2;
    itob(n, s, b);
    printf("%s\n", s);
    return 0;
}

void itob(int n, char s[], int b) {
    int i = 0;
    do {
        int x = n % b;
        if (x <= 10) {
            s[i++] = n % b + '0';
        } else {
            s[i++] = n % b + 'A' - 10;
        }
        
    } while ((n /= b) > 0);
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