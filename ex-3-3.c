#include <stdio.h>

void expand(char s1[], char s2[]);

int main() {
    char test1[] = "Hello -C-G World a--z w-Z a-d";
    char test2[1000];
    expand(test1, test2);
    printf("%s\n", test2);
    return 0;
}

void expand(char s1[], char s2[]) {
    // We want to expand all sort of short hand notation.
    // Let's start by expanding "a-z" to the string "abc...xyz"
    // We copy from s1 into s2.

    int i = 0;
    int j = 0;
    while (s1[i+2] != '\0') {
        char c0 = s1[i];
        char c1 = s1[i+1];
        char c2 = s1[i+2];
        //printf("c0: %c\tc1: %c\tc2: %c\n", c0, c1, c2);
        if ((c1 == '-') && (((('a' - c0) <= 0) && (('z' - c0) >= 0) && (('a' - c2) <= 0) && (('z' - c2) >= 0)) || (((('A' - c0) <= 0) && (('Z' - c0) >= 0) && (('A' - c2) <= 0) && (('Z' - c2) >= 0))))) {
            // c0 is between a and z, c1 is a dash, c2 is between a and z
            //printf("HI\n");
            char k = c0;
            while (k != c2) {
                s2[j] = k;
                j++;
                k++;
            }
            s2[j] = c2;
            j++;
            i += 3;
        } else {
            s2[j] = c0;
            i += 1;
            j += 1;
        }
    }
    s2[j++] = s1[i++];
    s2[j++] = s1[i++];
    s2[j] = '\0';
}

