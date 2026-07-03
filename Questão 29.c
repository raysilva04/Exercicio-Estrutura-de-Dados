#include <stdio.h>

int main() {
    float valorDiaria = 150.00;
    int diarias;

    int hospedeAtual = 1;
    int hospedesMais20Dias = 0;

    float somaContas = 0;
    int totalHospedes = 0;

    int somaDiarias = 0;

    float maiorConta = 0;
    int primeiraConta = 1;

    printf("--- Cálculo de contas do hotel (digite 0 diárias para encerrar) ---\n\n");

    while (1) {
        printf("Hóspede %d - Digite a quantidade de diárias: ", hospedeAtual);
        scanf("%d", &diarias);

        if (diarias == 0) {
            break;
        }

        float desconto;
        float valorBruto = diarias * valorDiaria;
        float valorPago;

        if (diarias <= 5) {
            desconto = 0.05;
        } else if (diarias <= 10) {
            desconto = 0.10;
        } else {
            desconto = 0.15;
        }

        valorPago = valorBruto - (valorBruto * desconto);

        printf("Valor a pagar pelo hóspede %d: R$ %.2f\n\n", hospedeAtual, valorPago);

        // Item a: hóspedes com mais de 20 dias
        if (diarias > 20) {
            hospedesMais20Dias++;
        }

        // Acumuladores para médias
        somaContas += valorPago;
        somaDiarias += diarias;
        totalHospedes++;

        // Item e: maior conta paga
        if (primeiraConta) {
            maiorConta = valorPago;
            primeiraConta = 0;
        } else if (valorPago > maiorConta) {
            maiorConta = valorPago;
        }

        hospedeAtual++;
    }

    printf("\n--- Resultados Finais ---\n");

    if (totalHospedes == 0) {
        printf("Nenhum hóspede foi informado.\n");
    } else {
        printf("a) Quantidade de hóspedes que ficaram mais de 20 dias: %d\n", hospedesMais20Dias);
        printf("c) Média do valor das contas pagas: R$ %.2f\n", somaContas / totalHospedes);
        printf("d) Média de dias de permanência: %.2f\n", (float) somaDiarias / totalHospedes);
        printf("e) Valor da maior conta paga: R$ %.2f\n", maiorConta);
    }

    return 0;
}
