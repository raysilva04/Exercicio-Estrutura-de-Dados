#include <stdio.h>

int main() {
    float soma = 0;
    int numerador;

    for (int i = 1; i <= 50; i++) {
        numerador = 51 - i;
        soma += (float) numerador / i;
    }

    printf("O somatório S = 50/1 + 49/2 + 48/3 + ... + 1/50 é: %.4f\n", soma);

    return 0;
}
