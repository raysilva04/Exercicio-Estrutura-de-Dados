#include <stdio.h>

int main(){
   
   float soma;
   float numero1, numero2;
   
   printf("Digite o primeiro número:\n");
   scanf("%f", &numero1);
   
   printf("Digite o segundo número:\n");
   scanf("%f", &numero2);
   
   soma = numero1 + numero2;
   
   printf("O total da soma é: %.2f\n", soma);
   
    return 0;
}
