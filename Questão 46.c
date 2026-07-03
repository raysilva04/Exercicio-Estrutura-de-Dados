#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    float distancia;

    printf("Digite X1: ");
    scanf("%f", &x1);
    printf("Digite Y1: ");
    scanf("%f", &y1);

    printf("Digite X2: ");
    scanf("%f", &x2);
    printf("Digite Y2: ");
    scanf("%f", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\nA distância entre os pontos é: %.2f\n", distancia);

    return 0;
}
