#include <stdio.h>

int main() {
    float altura;
    int sexo;

    float maiorAltura = 0;
    float menorAltura = 0;
    int primeiraLeitura = 1;

    int numHomens = 0;
    int numMulheres = 0;
    float somaAlturaMulheres = 0;
    int mulheresAbaixo168 = 0;

    printf("--- Coleta de dados (digite altura <= 0 para encerrar) ---\n\n");

    while (1) {
        printf("Digite a altura: ");
        scanf("%f", &altura);

        if (altura <= 0) {
            break;
        }

        printf("Digite o sexo (1-Masculino / 2-Feminino): ");
        scanf("%d", &sexo);

        // Atualiza maior e menor altura
        if (primeiraLeitura) {
            maiorAltura = altura;
            menorAltura = altura;
            primeiraLeitura = 0;
        } else {
            if (altura > maiorAltura) {
                maiorAltura = altura;
            }
            if (altura < menorAltura) {
                menorAltura = altura;
            }
        }

        // Contabiliza por sexo
        if (sexo == 1) {
            numHomens++;
        } else if (sexo == 2) {
            numMulheres++;
            somaAlturaMulheres += altura;

            if (altura < 1.68) {
                mulheresAbaixo168++;
            }
        }

        printf("\n");
    }

    printf("\n--- Resultados ---\n");

    if (primeiraLeitura) {
        printf("Nenhum dado foi informado.\n");
    } else {
        printf("a) Maior altura do grupo: %.2f\n", maiorAltura);
        printf("   Menor altura do grupo: %.2f\n", menorAltura);

        printf("b) Número de homens: %d\n", numHomens);

        if (numMulheres > 0) {
            printf("c) Média de altura das mulheres: %.2f\n",
                   somaAlturaMulheres / numMulheres);

            printf("d) Percentual de mulheres abaixo de 1.68: %.2f%%\n",
                   (mulheresAbaixo168 * 100.0) / numMulheres);
        } else {
            printf("c) Não há mulheres no grupo para calcular a média.\n");
            printf("d) Não há mulheres no grupo para calcular o percentual.\n");
        }
    }

    return 0;
}
