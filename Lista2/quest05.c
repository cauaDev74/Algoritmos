#include <stdio.h>
#include <stdlib.h>

int main(){
    float valproduto,valdevenda, acres, percento;
    printf("Insira o custo do produto: ");
    scanf("%f",&valproduto);
    printf("Insira o percentual de acrescimo: % ");
    scanf("%f",&percento);

    acres = (valproduto * percento) / 100;

    valdevenda = valproduto + acres;
    printf("Valor de venda: R$%.2f\n", valdevenda);

}