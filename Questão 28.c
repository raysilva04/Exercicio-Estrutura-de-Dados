#include <stdio.h>

int main() {
    float altura;
    int sexo;

    int totalPessoas = 50;

    float somaAlturaTotal = 0;
    float somaAlturaMulheres = 0;

    int numHomens = 0;
    int numMulheres = 0;
    int mulheresAbaixo165 = 0;

    printf("--- Coleta de dados (50 pessoas) ---\n\n");

    for (int i = 1; i <= totalPessoas; i++) {
        printf("Pessoa %d\n", i);

        printf("Digite a altura: ");
        scanf("%f", &altura);

        printf("Digite o sexo (0-Masculino / 1-Feminino): ");
        scanf("%d", &sexo);

        somaAlturaTotal += altura;

        if (sexo == 0) {
            numHomens++;
        } else if (sexo == 1) {
            numMulheres++;
            somaAlturaMulheres += altura;

            if (altura < 1.65) {
                mulheresAbaixo165++;
            }
        }

        printf("\n");
    }

    printf("--- Resultados ---\n");

    if (numMulheres > 0) {
        printf("a) Média de altura das mulheres: %.2f\n",
               somaAlturaMulheres / numMulheres);
    } else {
        printf("a) Não há mulheres na amostra para calcular a média.\n");
    }

    printf("b) Média de altura da população: %.2f\n",
           somaAlturaTotal / totalPessoas);

    printf("c) Percentual de homens na população: %.2f%%\n",
           (numHomens * 100.0) / totalPessoas);

    printf("d) Quantidade de mulheres: %d\n", numMulheres);

    if (numMulheres > 0) {
        printf("e) Percentual de mulheres abaixo de 1.65 m: %.2f%%\n",
               (mulheresAbaixo165 * 100.0) / numMulheres);
    } else {
        printf("e) Não há mulheres na amostra para calcular o percentual.\n");
    }

    return 0;
}
