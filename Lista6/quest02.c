#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[10];
    int B[10];
    int resultado[10];

    for(int i = 0; i < 10; i++){
        printf("Insira valor: ");
        scanf("%d", &A[i]);
    }
    printf("\n");
    for(int j = 0; j < 10; j++){
        printf("Insira valor: ");
        scanf("%d", &B[j]);
    }
    printf("\n");
    printf("Produto dos vetores: \n\n");
    for(int k = 0; k < 10; k++){
        resultado[k] = A[k] * B[k];
        printf("%d x %d = %d\n", A[k], B[k], resultado[k]);
    }

    system("pause");
    return 0;
}