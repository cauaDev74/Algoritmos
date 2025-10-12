#include <stdio.h>
#include <stdlib.h>

int main(){
    float real,dolar;
    float cotaD = 6.38;
    printf("Quantidade de dolares armazenados: ");
    scanf("%f", &dolar);
    
    real = dolar * cotaD;

    printf("Qtd de dolares: $%.2f\n", dolar);
    printf("Qtd de reais: R$%.2f\n", real);

}