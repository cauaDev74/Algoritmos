#include <stdio.h>
#include <stdlib.h>

int main(){
    int sPositivos = 0, num, sNegativos = 0;

    do{
        printf("Insira valor: ");
        scanf("%d", &num);

        if(num >=0){
            sPositivos += num;
        }else if(num < 0){
            sNegativos += num;
        }

    } while (num != 0);

    printf("Soma dos inteiros positivos: %d\n", sPositivos);
    printf("Soma dos valores negativos: %d\n", sNegativos);
    
}