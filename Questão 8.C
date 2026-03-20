#include <stdio.h>
#include <math.h>

int main(){
   
   int num1, num2;
   double resultado1, resultado2;
   
   printf("Digite o primeiro número: \n");
   scanf("%d", &num1);
   
    printf("Digite o segundo número: \n");
   scanf("%d", &num2);
   
   resultado1 = pow(num1, num2);
   resultado2 = pow(num2, num1);
   
   printf("O primeiro elevado ao segundo é: %.2lf\n", resultado1);
   printf("O segundo elevado ao primeiro é: %.2lf\n", resultado2);
   
   
    return 0;
}
