#include <stdio.h>

int main() {
    int vezesUsou;

    int menosDe10 = 0;
    int entre10e15 = 0;
    int acimaDe15 = 0;
    int totalAlunos = 0;

    printf("--- Pesquisa uso do restaurante (digite valor negativo para encerrar) ---\n\n");

    while (1) {
        printf("Digite o número de vezes que o aluno usou o restaurante: ");
        scanf("%d", &vezesUsou);

        if (vezesUsou < 0) {
            break;
        }

        if (vezesUsou < 10) {
            menosDe10++;
        } else if (vezesUsou <= 15) {
            entre10e15++;
        } else {
            acimaDe15++;
        }

        totalAlunos++;
    }

    printf("\n--- Resultados ---\n");

    if (totalAlunos == 0) {
        printf("Nenhum aluno foi entrevistado.\n");
    } else {
        printf("a) Percentual que utilizou menos de 10 vezes: %.2f%%\n",
               (menosDe10 * 100.0) / totalAlunos);
        printf("b) Percentual que utilizou entre 10 e 15 vezes: %.2f%%\n",
               (entre10e15 * 100.0) / totalAlunos);
        printf("c) Percentual que utilizou acima de 15 vezes: %.2f%%\n",
               (acimaDe15 * 100.0) / totalAlunos);
        printf("d) Número de alunos entrevistados: %d\n", totalAlunos);
    }

    return 0;
}
