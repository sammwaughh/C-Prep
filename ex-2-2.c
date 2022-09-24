#include <stdio.h>
#define MAXLINE 1000

int getline2(char line[], int maxline);

int main() {
    char line[MAXLINE];
    while (getline2(line, MAXLINE) > 0) {
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
    for (i = 0; i < lim-1; ++i) {
        if (c=getchar() != '\n') {
            if (c != EOF) {
                s[i] = c;
            }
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