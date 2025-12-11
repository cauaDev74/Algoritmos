#include <stdio.h>
#include <stdlib.h>

int main(){
    int menor = 999999;
    int vetor[7];
    
    for(int i = 0; i < 7; i++){
        printf("%d. Insira valor: ", i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("Menor valor: %d\n", menor);

    system("pause");
    return 0;
}