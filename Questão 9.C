#include <stdio.h>
#include <math.h>

int main(){
   
   int num1, num2;
   int resto;
   
   printf("Digite o primeiro número: \n");
   scanf("%d", &num1);
   
   printf("Digite o segundo número: \n");
   scanf("%d", &num2);
   
   resto = num1 % num2;
   
   printf("O resto da divisão é: %d\n", resto);
   
    return 0;
}
