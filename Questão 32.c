#include <stdio.h>

#define PI 3.14159

int main() {
    float raio;
    float comprimento;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    comprimento = 2 * PI * raio;

    printf("O comprimento do círculo é: %.2f\n", comprimento);

    return 0;
}
