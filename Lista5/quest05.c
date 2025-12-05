#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, divisores = 0, resto;

    printf("Insira N: ");
    scanf("%d", &n);

    for(int i = 1;i <= n;i++){
        resto = n % i;
        if(resto == 0){
            divisores++;
        }
    }if(n >= 2){
        if(divisores == 2){
            printf("O numero eh primo.\n");
        }else{
            printf("O numero nao eh primo.\n");
        }
    }else{
        printf("O numero nao eh primo. \n");
    }

    system("pause");
    return 0;
}