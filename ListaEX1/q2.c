#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    /*Declarando variáveis*/
    float valor, dobro, triplo, quadrado;
    printf("Insira valor: ");
    scanf("%f", &valor);

    /*Processamento*/
    dobro = valor * 2;
    triplo = valor *3;
    quadrado = pow(valor, 2);

    printf("Dobro: %.1f\n", dobro);
    printf("Triplo: %.1f\n", triplo);
    printf("Quadrado: %.1f\n", quadrado);
    
    system("pause");
    return 0; 
}