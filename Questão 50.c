#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto;
    int tentativa;
    int acertou = 0;

    srand(time(NULL));
    numeroSecreto = (rand() % 10) + 1; // número aleatório entre 1 e 10

    printf("Jogador 2, tente adivinhar o número entre 1 e 10!\n");
    printf("Você tem 4 tentativas.\n\n");

    for (int i = 1; i <= 4; i++) {
        printf("Tentativa %d: ", i);
        scanf("%d", &tentativa);

        if (tentativa == numeroSecreto) {
            printf("\nParabéns! Você acertou na tentativa %d!\n", i);
            acertou = 1;
            break;
        } else if (tentativa < numeroSecreto) {
            printf("O número secreto é maior.\n\n");
        } else {
            printf("O número secreto é menor.\n\n");
        }
    }

    if (!acertou) {
        printf("\nVocê não acertou o número. O número secreto era: %d\n", numeroSecreto);
    }

    return 0;
}
