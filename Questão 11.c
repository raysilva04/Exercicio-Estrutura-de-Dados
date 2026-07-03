#include <stdio.h>

int main() {
    int valor;
    int contadorNegativos = 0;
    int contadorPositivos = 0;
    int contadorZeros = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);

        if (valor < 0) {
            contadorNegativos++;
        } else if (valor > 0) {
            contadorPositivos++;
        } else {
            contadorZeros++;
        }
    }

    printf("\n--- Resultado ---\n");
    printf("Quantidade de valores negativos: %d\n", contadorNegativos);
    printf("Quantidade de valores positivos: %d\n", contadorPositivos);
    printf("Quantidade de valores iguais a zero: %d\n", contadorZeros);

    return 0;
}
