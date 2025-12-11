#include <stdio.h>
#include <stdlib.h>
#define MAX_INDICE 10

int selecionarVetores(int vetorObjeto[MAX_INDICE]){
    int Pares[MAX_INDICE];
    Pares[0] = 0;Pares[5] = 0;
    Pares[1] = 0;Pares[6] = 0;
    Pares[2] = 0;Pares[7] = 0;
    Pares[3] = 0;Pares[8] = 0;
    Pares[4] = 0;Pares[9] = 0;
    int Impares[MAX_INDICE];
    
    Impares[0] = 0;Impares[5] = 0;
    Impares[1] = 0;Impares[6] = 0;
    Impares[2] = 0;Impares[7] = 0;
    Impares[3] = 0;Impares[8] = 0;
    Impares[4] = 0;Impares[9] = 0;

    for(int i; i < MAX_INDICE; i++){
        if(vetorObjeto[i] % 2 == 0){
            Pares[i] += vetorObjeto[i];
        }else{
            Impares[i] += vetorObjeto[i];
        }
    }
    for(int ii = 0; ii < MAX_INDICE; ii++){
        if()
    }

}

int main(){
    int principal[MAX_INDICE];

    for(int i; i < MAX_INDICE;i++){
        printf("%d. Insira valor: ",i+1);
        scanf("%d", &principal[i]);
    }

    
    
    system("pause");
    return 0;
}