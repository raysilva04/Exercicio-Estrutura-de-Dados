#include <stdio.h>

int main() {
    int num1, num2;
    int produto = 0;

    printf("Digite o 1º número: ");
    scanf("%d", &num1);

    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    int base = num1;
    int vezes = num2;

    // Garante que o laço funcione corretamente mesmo com números negativos
    if (vezes < 0) {
        base = -base;
        vezes = -vezes;
    }

    for (int i = 1; i <= vezes; i++) {
        produto += base;
    }

    printf("\n%d x %d = %d\n", num1, num2, produto);

    return 0;
}
