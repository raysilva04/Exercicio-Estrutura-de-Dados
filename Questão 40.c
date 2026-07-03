#include <stdio.h>

int main() {
    int a, b, c;
    float r, s, d;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    r = (a + b) * (a + b);
    s = (b + c) * (b + c);
    d = (r + s) / 2.0;

    printf("\nR = %.2f\n", r);
    printf("S = %.2f\n", s);
    printf("D = %.2f\n", d);

    return 0;
}
