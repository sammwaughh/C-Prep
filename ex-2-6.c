#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

/*
Test 2:

x = 10000001 == 129
y = 101101 == 45
z = setbits(x, 5, 4, y) = 10110101 == 181

It works!
*/

int main() {
    // Testing the function
    printf("%u\n", setbits(245, 4, 3, 25));
    printf("%u\n", setbits(129, 5, 4, 45));
    return 0;
}

/* Write a function setbits(x, p, n, y) that returns x
with the n bits that begin at position p set to the 
rightmost n bits of y, leaving the other unchanged

Method:
Say we have setbits(117, 4, 3, 25)
245 == 11110101
25  == 00011001
so we want as our result: 111(001)01
where the brackets show the change
which is 11100101 = 229

we start with 111(101)01
first replace with 111(111)01
by doing 111(101)01 | 00011100
then do 111(111)01 & 111(001)11
to get our result 111(001)01

to generate 000(111)00 we do:
~(~0 << n) << (p+1-n):
~0 << n) generates 1111..11111(000)
~(~0 << n)) generates 00000...00000000(111)
~(~0 << n)) << (p+1-n) generates 00...00000(111)00

to generate 111(001)11 we do:
y = 00011(001)
~y & ~(~0 << n) gives 00000(110)
z = 00000(110)
then z << (p+1-n)
gives 000(110)00
then we do ~000(110)00
to get w = 111(001)11
for a larger bit system w is just 11...111111(001)11
*/

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    // Lots of masking using shifting going on
    unsigned z = ~y & ~(~0 << n);
    unsigned w = ~(z << (p+1-n));
    unsigned v = x | (~(~0 << n) << (p+1-n));
    //return w & v;

    // In one line
    return (~((~y & ~(~0 << n)) << (p+1-n))) & (x | (~(~0 << n) << (p+1-n)));
}



