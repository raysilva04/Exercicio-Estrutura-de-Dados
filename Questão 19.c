#include <stdio.h>

int main() {
    int numero;
    int contadorPositivos = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            contadorPositivos++;
        }
    }

    printf("\nQuantidade de números positivos digitados: %d\n", contadorPositivos);

    return 0;
}
