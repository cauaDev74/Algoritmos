#include <stdio.h>
#include <stdlib.h>
int main(){
    float valordoproduto, valorcomdesconto;
    float desconto;

    printf("Insira o valor do produto: ");
    scanf("%f", &valordoproduto);

    desconto = valordoproduto * 0.09;
    valorcomdesconto = valordoproduto - desconto;

    printf("Valor com desconto: R$%.2f\n", valorcomdesconto);
}