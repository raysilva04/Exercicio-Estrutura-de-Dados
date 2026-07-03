#include <stdio.h>

int main() {
    int numero;
    int continuar;

    do {
        printf("Digite o número que deseja ver a tabuada: ");
        scanf("%d", &numero);

        printf("\nTabuada do número %d:\n", numero);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("\nDeseja continuar? (1-SIM / 0-NÃO): ");
        scanf("%d", &continuar);
        printf("\n");

    } while (continuar == 1);

    printf("Programa encerrado.\n");

    return 0;
}
