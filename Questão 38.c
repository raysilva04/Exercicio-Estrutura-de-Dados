#include <stdio.h>

int main() {
    char nome[100];
    float horasTrabalhadas;
    int numDependentes;

    const float valorHora = 3.00;
    const float valorDependente = 100.00;
    const float percentualDesconto = 0.135;

    printf("Digite o nome do funcionário: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o número de dependentes: ");
    scanf("%d", &numDependentes);

    float salarioTrabalho = horasTrabalhadas * valorHora;
    float salarioDependentes = numDependentes * valorDependente;
    float salarioBruto = salarioTrabalho + salarioDependentes;
    float desconto = salarioTrabalho * percentualDesconto;
    float salarioLiquido = salarioBruto - desconto;

    printf("\n--- Resultado ---\n");
    printf("Nome do funcionário: %s", nome);
    printf("Salário líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
