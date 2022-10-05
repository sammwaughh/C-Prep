#include <stdio.h>

void escape(char s[], char t[]);

int main() {
    char testString[] = "Hello\tWorld\n";
    char testOutput[1000];
    escape(testOutput, testString);
    printf("%s\n", testOutput);
    return 0;
}

void escape(char s[], char t[]) {
    // Copying the string t to s but converting newline characters and tab characters 
    // into visible strings like \n and \t. Using a switch statement.

    int i, j;
    for (i = j = 0; t[i] != '\0'; ++i) {
        switch (t[i]) {
            case '\n':
                s[j] = '\\';
                j++;
                s[j] = 'n';
                j++;
                break;
            case '\t':
                s[j] = '\\';
                j++;
                s[j] = 't';
                j++;
                break;
            default: 
                s[j] = t[i];
                j++;
        }
    }
}

