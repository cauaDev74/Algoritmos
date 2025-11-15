#include <stdio.h>
#include <stdlib.h>

int main(){
    char combustivel;

    float valorAlc = 2.9;
    float valorGas = 3.3;
    float valorBruto;
    float valorLiquido;
    float litros;
    float desconto;

    printf("A - Alcool R$%.2f\n", valorAlc);
    printf("G - Gasolina R$%.2f\n", valorGas);
    printf("Selecione: ");
    scanf("%c", &combustivel);
    printf("Quantidade em litros: ");
    scanf("%f", &litros);
    
    switch (combustivel)
    {
    case 'A':
        if(litros <= 20){
            valorBruto = litros * valorAlc;
            desconto = valorBruto * 0.03;
            valorLiquido = valorBruto - desconto;
        }else if(litros > 20){
            valorBruto = litros * valorAlc;
            desconto = valorBruto * 0.05;
            valorLiquido = valorBruto - desconto;
        }
        break;
    case 'G':
        if(litros <= 20){
            valorBruto = litros * valorGas;
            desconto = valorBruto * 0.04;
            valorLiquido = valorBruto - desconto;

        }else if(litros > 20){
            valorBruto = litros * valorGas;
            desconto = valorBruto * 0.06;
            valorLiquido = valorBruto - desconto;

        }
        break;


    default:
        break;
    }

    printf("Valor a ser pago: R$ %.2f\n", valorLiquido);

    return 0;
}