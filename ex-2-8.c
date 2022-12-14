#include <stdio.h>

unsigned rightrot(unsigned x, int n);
void printBinary(unsigned n);
int wordlength();

int main() {
    unsigned x = 28;
    unsigned y = rightrot(x, 4);
    printBinary(x);
    printBinary(y);
    return 0;
}

// Write a function rightrot(x,n) that returns
// the value of the integer x rotated to the right 
// by n bit positions
/*
Example: (000...00011001(010), 3) --> (010)00..00011001

n = 3
x = ..0011001(010)
y = x >> n = ..00001101
000...0001101 | (010)..0000000 = (010)..0001101 as required
so we need to generate (010)..0000000
z = ~(~0 << n) & x == 000..000(010)
z << (32-n)
*/

unsigned rightrot(unsigned x, int n) {
    int w = wordlength();
    n = n % w;
    return (x >> n) | ((~(~0 << n) & x) << (w-n));
}

void printBinary(unsigned n) {
    int w = wordlength();
    int binary[w];
    for (int i = 0; i < w-1; i++) {
        binary[i] = 0;
    }
    for (int i = w-1; n > 0; i--) {
        binary[i] = n%2;
        n=n/2;
    }
    printf("Binary version: ");
    for (int i = 0; i < w; i++) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int wordlength() {
    unsigned v = (unsigned) ~0;
    int i;
    for (i = 1; (v >>= 1) > 0; i++) {
        ;
    }
    return i;
}

