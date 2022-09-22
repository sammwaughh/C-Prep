#include <stdio.h>

/* Temperature conversion program */

int main() {
    char* title = "Converter\n";
    printf("%13s", title);

    for (int fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%3d\t%4.f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }

    return 0;
}