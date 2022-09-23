#include <stdio.h>
#define MAXLINE 40

int getline2(char line[], int maxline);

int main() {
    int len;
    char line[MAXLINE];
    while ((len = getline2(line, MAXLINE)) > 0) {
        int i = len-2;
        char end = line[i];
        while (end == ' ' || end == '\t') {
            --i;
            end = line[i];
        }
        line[i+1] = '\n';
        line[i+2] = '\0';
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
