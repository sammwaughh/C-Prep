#include <stdio.h>
#define LIMIT 20
#define MAXLINE 100

int getline2(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len;
    char line[MAXLINE];
    while ((len = getline2(line, MAXLINE)) > 0) {
        if (len > LIMIT) {
            printf("%s\n", line);
        }
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