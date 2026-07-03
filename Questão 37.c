#include <stdio.h>

int main() {
    float odometroAntes, odometroDepois;
    float litrosCombustivel;
    float precoCombustivel;

    printf("Digite a quilometragem antes da viagem: ");
    scanf("%f", &odometroAntes);

    printf("Digite a quilometragem depois da viagem: ");
    scanf("%f", &odometroDepois);

    printf("Digite os litros de combustível gastos: ");
    scanf("%f", &litrosCombustivel);

    printf("Digite o preço do combustível (por litro): R$ ");
    scanf("%f", &precoCombustivel);

    float kmRodados = odometroDepois - odometroAntes;
    float kmPorLitro = kmRodados / litrosCombustivel;
    float custoViagem = litrosCombustivel * precoCombustivel;

    printf("\n--- Resultado ---\n");
    printf("a) Quilometragem rodada: %.2f km\n", kmRodados);
    printf("b) Quilômetros por litro: %.2f km/l\n", kmPorLitro);
    printf("c) Custo da viagem: R$ %.2f\n", custoViagem);

    return 0;
}
