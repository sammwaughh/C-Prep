#include <stdio.h>
#define MAXLINE 40

int getline2(char line[], int maxline);
int remove2(char s[]);

int main() {
    int len;
    char line[MAXLINE];
    while (getline2(line, MAXLINE) > 0) {
        if (remove2(line) > 0) {
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

int remove2(char s[]) {
    int i;
    i = 0;
    while (s[i] != '\n') {
        ++i;
    }
    --i;
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t')) {
        --i;
    }
    if (i >= 0) {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}
