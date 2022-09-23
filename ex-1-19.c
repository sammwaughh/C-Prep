#include <stdio.h>
#define MAXLINE 1000

int getline2(char line[], int maxline);
void reverse(char s[]);

int main() {
    char line[MAXLINE];
    while (getline2(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s\n", line);
    }
    return 0;
}

int getline2(char s[], int lim) {
    int c, i, j;
    for (i = j = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        if (i < lim) {
            s[j++] = c;
        }    
    }
    if (c == '\n') {
        if (i < lim) {
            s[j++] = c;
        }
        ++i;
    }
    s[i] = '\0';
    return i;
}

// You can swap characters in place using a temporary char variable
// instead of making a new string and then copying it over the old one
void reverse(char s[]) {
    int i;
    i = 0;
    while (s[i] != '\n') {
        ++i;
    }
    char reversed[i];
    --i;
    int length = i;
    while (i >= 0) {
        reversed[length - i] = s[i];
        --i;
    }
    for (int j = 0; j <= length; ++j) {
        s[j] = reversed[j];
    }
}
