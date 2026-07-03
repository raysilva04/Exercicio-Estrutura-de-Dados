#include <stdio.h>

int main() {
    float h, r;
    int n;

    printf("Digite a altura inicial H: ");
    scanf("%f", &h);

    printf("Digite o coeficiente de salto R (0 < R < 1): ");
    scanf("%f", &r);

    printf("Digite o número de saltos N: ");
    scanf("%d", &n);

    float distanciaTotal = h; // primeira descida
    float alturaSalto = h;

    for (int i = 1; i <= n; i++) {
        alturaSalto = alturaSalto * r;
        distanciaTotal += 2 * alturaSalto; // sobe e desce
    }

    printf("\nDistância percorrida até o %dº salto: %.2f\n", n, distanciaTotal);
    printf("Altura do %dº salto: %.2f\n", n, alturaSalto);

    return 0;
}
