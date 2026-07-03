#include <stdio.h>

int main() {
    float custoFabrica;
    const float percentualDistribuidor = 0.28;
    const float percentualImpostos = 0.45;

    printf("Digite o custo de fábrica do carro: R$ ");
    scanf("%f", &custoFabrica);

    float valorDistribuidor = custoFabrica * percentualDistribuidor;
    float valorImpostos = custoFabrica * percentualImpostos;

    float custoConsumidor = custoFabrica + valorDistribuidor + valorImpostos;

    printf("O custo ao consumidor é: R$ %.2f\n", custoConsumidor);

    return 0;
}
