#include <stdio.h>

void imprimirSequencia(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("\n");
    imprimirSequencia(n);

    return 0;
}
