#include <stdio.h>
#define MAXLINE 40

int getline2(char line[], int maxline);
void reverse(char s[]);

int main() {
    int len;
    char line[MAXLINE];
    while ((len = getline2(line, MAXLINE)) > 0) {
        
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

void reverse(char s[]) {
    
}
