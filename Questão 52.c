#include <stdio.h>

int main() {
    int idade;
    float salarioBruto;
    int acidente;

    float somaIdadeAcidentados = 0;
    int totalAcidentados = 0;

    float somaSalariosLiquidos = 0;

    printf("--- Pesquisa (digite salário bruto negativo para encerrar) ---\n\n");

    while (1) {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o salário bruto: R$ ");
        scanf("%f", &salarioBruto);

        if (salarioBruto < 0) {
            break;
        }

        printf("Já sofreu acidente de trabalho? (1-Sim / 0-Não): ");
        scanf("%d", &acidente);

        float salarioLiquido;
        if (salarioBruto > 1500.00) {
            salarioLiquido = salarioBruto - (salarioBruto * 0.10);
        } else {
            salarioLiquido = salarioBruto;
        }

        somaSalariosLiquidos += salarioLiquido;

        if (acidente == 1) {
            somaIdadeAcidentados += idade;
            totalAcidentados++;
        }

        printf("\n");
    }

    printf("\n--- Resultados ---\n");

    if (totalAcidentados > 0) {
        printf("a) Média de idade dos que sofreram acidente: %.2f\n",
               somaIdadeAcidentados / totalAcidentados);
    } else {
        printf("a) Nenhuma pessoa sofreu acidente de trabalho.\n");
    }

    printf("b) Total de salários líquidos pagos: R$ %.2f\n", somaSalariosLiquidos);

    return 0;
}
