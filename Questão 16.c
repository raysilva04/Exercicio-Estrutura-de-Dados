#include <stdio.h>

int main() {
    int idade1, idade2, idade3;
    float media;

    printf("Digite a idade do 1º indivíduo: ");
    scanf("%d", &idade1);

    printf("Digite a idade do 2º indivíduo: ");
    scanf("%d", &idade2);

    printf("Digite a idade do 3º indivíduo: ");
    scanf("%d", &idade3);

    media = (idade1 + idade2 + idade3) / 3.0;

    printf("\nA média de idade dos três indivíduos é: %.2f\n", media);

    return 0;
}
