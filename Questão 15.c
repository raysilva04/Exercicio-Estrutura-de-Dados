#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, nota5;
    float media;

    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);

    printf("Digite a 3ª nota: ");
    scanf("%f", &nota3);

    printf("Digite a 4ª nota: ");
    scanf("%f", &nota4);

    printf("Digite a 5ª nota: ");
    scanf("%f", &nota5);

    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf("\nA média aritmética das 5 notas é: %.2f\n", media);

    return 0;
}
