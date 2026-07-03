#include <stdio.h>

#define PI 3.14159

int main() {
    float raio, altura;
    float volume;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    volume = PI * raio * raio * altura;

    printf("O volume do cilindro é: %.2f\n", volume);

    return 0;
}
