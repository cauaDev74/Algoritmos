#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float a;
    setlocale(LC_ALL,"Portuguese");
    printf("Insira o valor: ");
    scanf("%f",&a);
    
    if(a > 10){
        printf("É maior que 10!\n");
    }else printf("Não é menor que 10.\n");

}