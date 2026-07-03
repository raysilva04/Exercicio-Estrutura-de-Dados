#include <stdio.h>

int main() {
    int n;

    printf("--- Cálculo de raiz quadrada por soma de ímpares (digite 0 para encerrar) ---\n\n");

    while (1) {
        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        int soma = 0;
        int impar = 1;
        int m = 0;

        while (soma < n) {
            soma += impar;
            impar += 2;
            m++;
        }

        if (soma == n) {
            printf("%d é um número quadrado perfeito. A raiz quadrada de %d é %d (M = %d termos)\n\n", n, n, m, m);
        } else {
            printf("%d não é um número quadrado perfeito.\n\n", n);
        }
    }

    printf("Programa encerrado.\n");

    return 0;
}
