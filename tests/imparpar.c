#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Eh par.\n");
    }else {
        printf("Ele eh impar.\n");
    }

}