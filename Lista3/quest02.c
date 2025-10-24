#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"pt-BR, UTF-8");
    float apple = 1.30, total;
    int qtdApple;

    printf("Quantidade de maçãs: ");
    scanf("%d", &qtdApple);

    if(qtdApple >= 12){
        apple = 1;
    }

    total = qtdApple * apple;

    printf("Total da compra: R$%.2f\n", total);


}