#include <stdio.h>
#include <stdlib.h>
#include "libraries/aritmetica.h"

int main(){
    int selection = 0;
    int x,y,z;                                                                                                                
    
    printf("=============== [CALCULADORA] ===============\n\n");
    printf("Selecione uma operação: \n");
    printf("1. SOMA\n");
    printf("2. SUBTRAIR\n");
    printf("3. MULTIPLICAR\n");
    printf("4. DIVIDIR\n\n");
    printf("=============== [ ESPECIAIS ] ===============\n");
    printf("5. DIVISIBILIDADE\n");
    
    scanf("%d", &selection);
    printf("Digite 2 numeros: ");
    scanf("%d %d", &x,&y);
    
    switch (selection){
    case 1:
        z = Soma(x,y);
        break;
    case 2:
        z = Subtracao(x,y);
        break;
    case 3:
        z = Multiplicacao(x,y);
        break;
    case 4:
        z = Divisao(x,y);
        break;
    case 5:
        Divisibilidade(x, y);
        break;
    default:
        break;
    }
    if(selection != 5){
        printf("Resultado = %d\n",z);
    }


    system("pause");
    return 0;
}