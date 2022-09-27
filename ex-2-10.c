#include <stdio.h>

int oldLower(int c);
int lower(int c);

int main() {

    return 0;
}

int oldLower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}

int lower(int c) {
    
}


