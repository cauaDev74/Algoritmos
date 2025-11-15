#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*Entrada de dados*/
    float vendas, salario, acressimo, diferenca, acressimo2, salariototal;

    printf("Salario fixo: ");
    scanf("%f", &salario);

    printf("Valor das vendas: ");
    scanf("%f", &vendas);
    /*Processamento de dados*/
    
    if(vendas <= 1500){
        acressimo = (salario * 3)/100;
        salariototal = salario + acressimo;
        if(vendas > 1500){
            diferenca = vendas - 1500;
            acressimo2 = (diferenca * 5)/100;
            salariototal = salariototal + acressimo2;
        }
    }

    /*Saída de dados*/
    printf("Salario total: R$%.2f\n", salariototal);

    system("pause");
    return 0;
}