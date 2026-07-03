#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Os 5 sucessores de %d são:\n", numero);

    for (int i = 1; i <= 5; i++) {
        printf("%d\n", numero + i);
    }

    return 0;
}
