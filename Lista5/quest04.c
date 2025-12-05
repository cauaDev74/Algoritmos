#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int maior = 0;
    int menor = 0;

    do{
        printf("Insira um inteiro: ");
        scanf("%d", &num);

        if(num < 0){
            printf("Valor inválido!\n");
        }else if(maior == 0){
            maior = num;
            menor = num;
        }else if(num > maior){
            maior = num;
            if(num < menor){
                menor = num;
            }
        }else if(num < menor && num != 0){
            menor = num;
        }


    } while(num != 0);

    if(maior == 0){
        printf("Nenhum valor positivo inserido.\n");
    }else{
        printf("Maior: %d Menor: %d\n", maior, menor);
    }

    return 0;
}