#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i = 0, fatorial = 1;
    printf("Insira o valor: ");
    scanf("%d", &num);

    for(i = num; i >= 1; i--){
        fatorial = fatorial * i;
    }
    
    printf("Fatorial de %d!: %d", num, fatorial);
    return 0;
}