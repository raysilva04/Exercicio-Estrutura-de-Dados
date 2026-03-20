#include <stdio.h>
#include <math.h>

int main(){
   
   float num;
   float quadrado;
   
   printf("Digite um número para apresentarmos o quadrado: \n");
   scanf("%f", &num);
   
   quadrado = num * num;
   
   printf("A raiz quadrada é: %.2f\n", quadrado);
   
   
    return 0;
}
