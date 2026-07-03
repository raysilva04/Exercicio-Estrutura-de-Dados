#include <stdio.h>

int main() {
    float largura, comprimento;
    float areaComodo;
    float areaTotal = 0;
    int continuar;
    int numComodo = 1;

    do {
        printf("--- Cômodo %d ---\n", numComodo);

        printf("Digite a largura (L): ");
        scanf("%f", &largura);

        printf("Digite o comprimento (C): ");
        scanf("%f", &comprimento);

        areaComodo = largura * comprimento;
        areaTotal += areaComodo;

        printf("Área do cômodo %d: %.2f m²\n\n", numComodo, areaComodo);

        printf("Deseja continuar informando outro cômodo? (1-SIM / 0-NÃO): ");
        scanf("%d", &continuar);
        printf("\n");

        numComodo++;

    } while (continuar == 1);

    printf("--- Resultado Final ---\n");
    printf("Área total da residência: %.2f m²\n", areaTotal);

    return 0;
}
