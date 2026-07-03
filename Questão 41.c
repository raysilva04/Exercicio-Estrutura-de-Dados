#include <stdio.h>

int main() {
    int numVendedor;
    char nomeVendedor[100];
    int carrosVendidos;
    float valorTotalVendas;
    float salarioFixo;
    float valorPorCarro;

    printf("Digite o número do vendedor: ");
    scanf("%d", &numVendedor);
    getchar(); // limpa o \n deixado pelo scanf anterior

    printf("Digite o nome do vendedor: ");
    fgets(nomeVendedor, sizeof(nomeVendedor), stdin);

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Digite o valor total das vendas: R$ ");
    scanf("%f", &valorTotalVendas);

    printf("Digite o salário fixo: R$ ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor recebido por carro vendido: R$ ");
    scanf("%f", &valorPorCarro);

    float comissaoCarros = carrosVendidos * valorPorCarro;
    float comissaoVendas = valorTotalVendas * 0.05;

    float salarioMensal = salarioFixo + comissaoCarros + comissaoVendas;

    printf("\n--- Resultado ---\n");
    printf("Código do vendedor: %d\n", numVendedor);
    printf("Nome do vendedor: %s", nomeVendedor);
    printf("Salário mensal: R$ %.2f\n", salarioMensal);

    return 0;
}
