#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main() {
    printf("%u\n", invert(201,4,3));
    return 0;
}

unsigned invert(unsigned x, int p, int n) {
    /* 
    110(010)01 -> 110(101)01

    x = 110(010)01
    ~(~(~0 << n) << (p+1-n)) = 111(000)11
    ((~x >> (p+1-n)) & ~(~0 << n)) << (p+1-n) = 000(101)00
    x & 111(000)11 = 110(000)01
    000(101)00 | 110(000)01 = 110(101)01
    110(101)01

    in one line:
    (x & (~(~(~0 << n) << (p+1-n)))) | (((~x >> (p+1-n)) & ~(~0 << n)) << (p+1-n))

    */
    return (x & (~(~(~0 << n) << (p+1-n)))) | (((~x >> (p+1-n)) & ~(~0 << n)) << (p+1-n));

    // Alternative approach is more efficient and uses the ^ (X0R) operator
    // return x ^ (~(~0 << n) << (p+1-n))
}



