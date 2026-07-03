#include <stdio.h>

int main() {
    int anos;
    int cigarrosPorDia;
    float precoCarteira;

    const int cigarrosPorCarteira = 20;
    const int diasPorAno = 365;

    printf("Digite a quantidade de anos que fuma: ");
    scanf("%d", &anos);

    printf("Digite o número de cigarros fumados por dia: ");
    scanf("%d", &cigarrosPorDia);

    printf("Digite o preço de uma carteira de cigarros: R$ ");
    scanf("%f", &precoCarteira);

    float precoPorCigarro = precoCarteira / cigarrosPorCarteira;

    int totalDias = anos * diasPorAno;
    int totalCigarros = totalDias * cigarrosPorDia;

    float totalGasto = totalCigarros * precoPorCigarro;

    printf("\n--- Resultado ---\n");
    printf("Total de cigarros fumados: %d\n", totalCigarros);
    printf("Valor total gasto com cigarros: R$ %.2f\n", totalGasto);

    return 0;
}
