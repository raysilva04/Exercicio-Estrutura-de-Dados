#include <stdio.h>

int main() {
    int totalFuncionarios;
    int qtdProdutos;
    float salarioFixo;
    float comissaoPorProduto;

    float somaSalarios = 0;
    float maiorSalarioFixo = 0;
    int primeiroFuncionario = 1;

    printf("Digite o número de funcionários: ");
    scanf("%d", &totalFuncionarios);

    for (int i = 1; i <= totalFuncionarios; i++) {
        printf("\n--- Funcionário %d ---\n", i);

        printf("Digite a quantidade de produtos vendidos: ");
        scanf("%d", &qtdProdutos);

        printf("Digite o salário fixo: R$ ");
        scanf("%f", &salarioFixo);

        if (qtdProdutos <= 5) {
            comissaoPorProduto = 1.50;
        } else if (qtdProdutos <= 50) {
            comissaoPorProduto = 2.00;
        } else {
            comissaoPorProduto = 2.50;
        }

        float salarioTotal = salarioFixo + (qtdProdutos * comissaoPorProduto);

        printf("Salário do funcionário %d: R$ %.2f\n", i, salarioTotal);

        somaSalarios += salarioTotal;

        if (primeiroFuncionario) {
            maiorSalarioFixo = salarioFixo;
            primeiroFuncionario = 0;
        } else if (salarioFixo > maiorSalarioFixo) {
            maiorSalarioFixo = salarioFixo;
        }
    }

    printf("\n--- Resultados ---\n");
    printf("b) Média dos salários pagos: R$ %.2f\n", somaSalarios / totalFuncionarios);
    printf("c) Maior salário fixo: R$ %.2f\n", maiorSalarioFixo);

    return 0;
}
