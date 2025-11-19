#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    int produto;

    printf("Insira o numero: ");
    scanf("%d", &number);

    for(int multiplicador = 0; multiplicador < 10; multiplicador++){
        produto = number * (multiplicador + 1);
        printf("%d x %d = %d\n", number, multiplicador +1 , produto);
    }

    return 0;
}