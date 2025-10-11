#include <stdio.h>
#include <stdlib.h>

int main(){
    //Entrada
    float fabrica, carro;
    float percentualDistribuidor, imposto;
    printf("Valor de Fabrica do carro: ");
    scanf("%f", &fabrica);

    //Processamento
    percentualDistribuidor = fabrica * 0.28;
    imposto = fabrica * 0.45;
    carro = fabrica + percentualDistribuidor + imposto;
    
    //Saida/Execução
    printf("Valor liquido do carro : R$%.2f\n", carro);
}