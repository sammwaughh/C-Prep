#include <stdio.h>

int main() {
    int n = 257;
    n = n & 0177;
    printf("n: %d\n", n);
    printf("%d\n", 0177);
    return 0;
}