#include <stdio.h>
#include <math.h>

int main(){
   
   int num1, num2;
   int quociente;
   
   printf("Digite o primeiro número: \n");
   scanf("%d", &num1);
   
   printf("Digite o segundo número: \n");
   scanf("%d", &num2);
   
   quociente = num1 / num2;
   
   printf("O quociente da divisão é: %d\n", quociente);
   
    return 0;
}
