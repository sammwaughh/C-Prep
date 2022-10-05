#include <stdio.h>

void escape(char s[], char t[]);
void reverseEscape(char s[], char t[]);

int main() {
    char testString[] = "Hello\\tWorld\\n";
    printf("%s\n", testString);
    char testOutput[1000];
    reverseEscape(testOutput, testString);
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

void reverseEscape(char s[], char t[]) {
    // Copying the string t to s but converting \n string and \t string 
    // into single \n and \t characters so that they behave as such. Using a switch statement.

    int i, j;
    for (i = j = 0; t[i] != '\0'; ++i) {
        switch (t[i]) {
            case '\\':
                switch(t[i+1]) {
                    case 'n':
                        s[j] = '\n';
                        i++;
                        j++;
                        break;
                    case 't':
                        s[j] = '\t';
                        i++;
                        j++;
                        break;
                }
                break; 
            default: 
                s[j] = t[i];
                j++;
        }
    }
}

