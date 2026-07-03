#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
        printf("Os próximos 10 números pares são:\n");

        int proximo = numero;
        for (int i = 1; i <= 10; i++) {
            proximo += 2;
            printf("%d\n", proximo);
        }
    } else {
        printf("O número %d é ímpar. Nenhum número par será exibido.\n", numero);
    }

    return 0;
}
