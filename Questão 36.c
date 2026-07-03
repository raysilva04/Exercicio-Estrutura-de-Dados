#include <stdio.h>
#include <math.h>

int main() {
    float largura, comprimento;
    float potenciaLampada;
    const float wattsPorM2 = 18.0;

    printf("Digite a largura do cômodo (m): ");
    scanf("%f", &largura);

    printf("Digite o comprimento do cômodo (m): ");
    scanf("%f", &comprimento);

    printf("Digite a potência da lâmpada (watts): ");
    scanf("%f", &potenciaLampada);

    float area = largura * comprimento;
    float potenciaNecessaria = area * wattsPorM2;
    int numLampadas = (int) ceil(potenciaNecessaria / potenciaLampada);

    printf("\nÁrea do cômodo: %.2f m²\n", area);
    printf("Potência total necessária: %.2f watts\n", potenciaNecessaria);
    printf("Número de lâmpadas necessárias: %d\n", numLampadas);

    return 0;
}
