#include <stdio.h>
#include <math.h>

int main(){
   
   float num;
   float raiz;
   
   printf("Digite um número para apresentarmos a raiz quadrada: \n");
   scanf("%f", &num);
   
   raiz = sqrt(num);
   
   printf("A raiz quadrada é: %.2f\n", raiz);
   
   
    return 0;
}
