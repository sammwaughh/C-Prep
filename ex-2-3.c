#include <stdio.h>

int htoi(char hex[]);
int hexconvert(char c);

int main() {
    char hexString[] = "0xF1";
    printf("Hexadecimal: %s is equal to %d\n", hexString, htoi(hexString));
    return 0;
}

int htoi(char hexString[]) {
    int i;
    if (hexString[1] == 'x' || hexString[1] == 'X') {
        i = 2;
    } else {
        i = 0;
    }
    int n = 0;
    while (hexString[i] != '\0') {
        n = n*16 + hexconvert(hexString[i]);
        ++i;
    }
    return n;
}

int hexconvert(char h) {
    if (h >= 48 && h <= 57) {
        return h - '0';
    } else if (h >= 65 && h <= 70) {
        return h - 'A' + 10;
    } else {
        return h - 'a' + 10;
    }
}
