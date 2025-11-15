#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor[3];
    int somaMaior;
    int menor;

    for(int i = 0; i < 3; i++){
        printf("Insira o valor %d: ", i+1);
        scanf("%d", &valor[i]);
        
    }
    
    if(valor[0] < valor[1] && valor[0] < valor[2]){
        menor = valor[0];
        somaMaior = valor[1] + valor[2];
    }else if(valor[1] < valor[0] && valor[1] < valor[2]){
        menor = valor[1];
        somaMaior = valor[0] + valor[2];
    }else if(valor[2] < valor[0] && valor[2] < valor[1]){
        menor = valor[2];
        somaMaior = valor[0] + valor[1];
    }
    printf("Menor valor: %d\n", menor);
    printf("Soma dos maiores: %d\n", somaMaior);

    system("pause");
    return 0;
}