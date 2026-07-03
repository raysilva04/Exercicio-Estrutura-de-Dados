#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    // Ajusta os valores para a faixa permitida (1 a 20)
    if (linhas < 1) {
        linhas = 1;
    } else if (linhas > 20) {
        linhas = 20;
    }

    if (colunas < 1) {
        colunas = 1;
    } else if (colunas > 20) {
        colunas = 20;
    }

    printf("\n");
    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= colunas; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
