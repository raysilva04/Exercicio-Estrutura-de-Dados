#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um número natural entre 0 e 9: ");
        scanf("%d", &numero);

        if (numero < 0 || numero > 9) {
            printf("Número inválido! Digite um valor entre 0 e 9.\n\n");
        }

    } while (numero < 0 || numero > 9);

    printf("\nTabuada do número %d:\n\n", numero);

    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
