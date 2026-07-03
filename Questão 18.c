#include <stdio.h>

int main() {
    int numero = 4;

    printf("Tabuada do número %d:\n\n", numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
