#include <stdio.h>

int main(){
   
   float mult;
   float numero1, numero2;
   
   printf("Digite o primeiro número:\n");
   scanf("%f", &numero1);
   
   printf("Digite o segundo número:\n");
   scanf("%f", &numero2);
   
   mult = numero1 * numero2;
   
   printf("O resultado da multiplicação é: %.2f\n", mult);
   
    return 0;
}
