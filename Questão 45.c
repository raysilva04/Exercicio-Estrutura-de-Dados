#include <stdio.h>

int main() {
    float razao, primeiroTermo, ultimoTermo;
    int numTermos;
    float soma;

    printf("Digite a razão da PA: ");
    scanf("%f", &razao);

    printf("Digite o primeiro termo: ");
    scanf("%f", &primeiroTermo);

    printf("Digite o último termo: ");
    scanf("%f", &ultimoTermo);

    numTermos = (int) ((ultimoTermo - primeiroTermo) / razao) + 1;

    soma = (primeiroTermo + ultimoTermo) * numTermos / 2.0;

    printf("\nNúmero de termos: %d\n", numTermos);
    printf("A soma dos elementos da PA é: %.2f\n", soma);

    return 0;
}
