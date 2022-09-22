#include <stdio.h>

/* Temperature conversion program */

int main() {
    char* title = "Converter\n";
    printf("%13s", title);

    float fahr, celcius;
    int start, end, step;

    start = 0;
    end = 300;
    step = 20;
    celcius = start;

    while (celcius <= end) {
        fahr = (9.0/5.0) * celcius + 32.0;
        printf("%3.0f\t%5.1f\n", celcius, fahr);
        celcius += step;
    }

    return 0;
}