#include <stdio.h>

int main() {
    printf("--- Escala em Celsius ---\n");
    for (int celsius = 0; celsius <= 50; celsius += 10) {
        printf("%d°C\n", celsius);
    }

    printf("\n--- Escala em Fahrenheit ---\n");
    for (int celsius = 0; celsius <= 50; celsius += 10) {
        float fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%.2f°F\n", fahrenheit);
    }

    return 0;
}
