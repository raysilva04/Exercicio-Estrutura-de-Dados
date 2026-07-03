#include <stdio.h>

int main() {
    int numero;
    int contadorPares = 0;
    int contadorImpares = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            contadorPares++;
        } else {
            contadorImpares++;
        }
    }

    printf("\n--- Resultado ---\n");
    printf("Quantidade de números pares: %d\n", contadorPares);
    printf("Quantidade de números ímpares: %d\n", contadorImpares);

    return 0;
}
