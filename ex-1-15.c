#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 30
/* Temperature conversion program */
float conversion(int f);

float conversion(int fahr) {
    return (5.0/9.0)*(fahr-32.0);
}

int main() {
    char* title = "Converter\n";
    printf("%13s", title);
    for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%3d\t%4.f\n", fahr, conversion(fahr));
    }
    return 0;
}