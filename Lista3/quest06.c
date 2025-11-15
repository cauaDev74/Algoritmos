#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Entrada de dados*/
    float saldo, debito, credito, saldoAtual;

    printf("Insira os valores:\n");

    printf("Saldo: ");
    scanf("%f", &saldo);

    printf("Debito: ");
    scanf("%f", &debito);

    printf("Credito: ");
    scanf("%f", &credito);

    /*Processamento*/
    saldoAtual = saldo - debito + credito;

    /*Saída de dados*/
    printf("Saldo atual: R$%.2f\n", saldoAtual);
    if(saldoAtual < 0){
        printf("Saldo negativo.\n");
    } else if(saldoAtual == 0){
        printf("Carteira vazia. :)\n");
    }

    return 0;
    system("pause");
}