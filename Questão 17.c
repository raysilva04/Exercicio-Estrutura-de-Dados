#include <stdio.h>
#include <math.h>

int main() {
    float catetoOposto, catetoAdjacente, hipotenusa;

    printf("Digite o valor do cateto oposto: ");
    scanf("%f", &catetoOposto);

    printf("Digite o valor do cateto adjacente: ");
    scanf("%f", &catetoAdjacente);

    hipotenusa = sqrt(pow(catetoOposto, 2) + pow(catetoAdjacente, 2));

    printf("\nA hipotenusa do triângulo retângulo é: %.2f\n", hipotenusa);

    return 0;
}
