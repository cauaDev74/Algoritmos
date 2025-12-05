#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade[10];
    int quantidade = 0;

    for(int i = 0; i < 10; i++){
        printf("Insira a idade: ");
        scanf("%d", &idade[i]);

        if(idade[i] >= 18){
            quantidade++;
        }
    }
    
    printf("Quantidade de pessoas com 18 anos: %d\n", quantidade);
    return 0;
}