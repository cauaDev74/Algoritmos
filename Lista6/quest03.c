#include <stdio.h>
#include <stdlib.h>
#define MAX_INDICE 10

int main(){
    int principal[MAX_INDICE];
    int Pares[MAX_INDICE];
    int Impares[MAX_INDICE];
    int P = 0, I = 0;

    for(int i = 0; i < MAX_INDICE;i++){
        printf("%d. Insira valor: ",i+1);
        scanf("%d", &principal[i]);
        if (principal[i] % 2 == 0){
            Pares[P] = principal[i];
            P++;
        }else{
            Impares[I] = principal[i];
            I++;
        }
        
    }
    printf("Valores pares: \n");
    for(int k = 0; k < P; k++){
        printf("Valor %d: %d\n", k+1, Pares[k]);
    }
    printf("Valores impares: \n");
    for(int j = 0; j < P; j++){
        printf("Valor %d: %d\n", j+1, Impares[j]);
    }

    
    
    system("pause");
    return 0;
}