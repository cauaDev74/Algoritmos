#include "aritmetica.h"
#include <stdio.h>

int Soma(int a, int b){
    return a + b;
}
int Subtracao(int a, int b){
    return a - b;
}
int Multiplicacao(int a, int b){
    return a * b;
}
int Divisao(int a, int b){
    if(b == 0){
        printf("Não eh possivel dividir por Zero.\n");
        return 0;
    } else
        return a / b;
}

void Divisibilidade(int a, int b){
    if(b == 0){
        printf("Nao eh possivel dividir por Zero.\n");
    }else if(a % b == 0){
        printf("%d eh divisivel por %d.\n", a, b);
    } else {
        printf("%d nao eh divisivel por %d.\n", a, b);
    }
}
