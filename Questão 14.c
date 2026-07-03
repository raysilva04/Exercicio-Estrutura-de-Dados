#include <stdio.h>

int main() {
    int numero;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);
        printf("Você digitou: %d\n", numero);
    }

    return 0;
}
