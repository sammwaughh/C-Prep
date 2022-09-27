#include <stdio.h>

int bitcount(unsigned x);
int oldBitcount(unsigned x);

int main() {
    int n = 13;
    printf("Number: %u\nOld Bitcount: %d\nNew Bitcount: %d\n", n, oldBitcount(n), bitcount(n));
    return 0;
}

int oldBitcount(unsigned x) {
    int b;
    for (b = 0; x != 0; x >>= 1) {
        if (x & 01) {
            b++;
        }
    }
    return b;
}

int bitcount(unsigned x) {
    int b = 0;
    while (x != 0) {
        x &= (x-1);
        b++;
    }
    return b;
}
