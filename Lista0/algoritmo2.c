#include <stdio.h>
#include <stdlib.h>

int main(){
    int salario, imposto;

    printf("Insira Salario: ");
    scanf("%d", &salario);

    imposto = salario * 0.05;

    printf("Imposto de renda: %d", imposto);

    return 0;
}