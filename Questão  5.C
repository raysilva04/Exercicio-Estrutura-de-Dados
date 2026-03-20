#include <stdio.h>

int main(){
   
   int num;
   int sucessor;
   
   printf("Digite um número para apresentarmos o sucesso: \n");
   scanf("%d", &num);
   
   sucessor = num + 1;
   printf("O sucessor de %d é: %d\n", num, sucessor);
   
    return 0;
}
