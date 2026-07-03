#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("A temperatura correspondente em Fahrenheit é: %.2f°F\n", fahrenheit);

    return 0;
}
