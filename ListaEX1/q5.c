#include <stdio.h>
#include <stdlib.h>

int main(){

    int combustivel, distancia, consumo;

    printf("Insira a distancia: ");
    scanf("%d",&distancia);
    printf("Insira o combustivel: ");
    scanf("%d",&combustivel);

    consumo=distancia/combustivel;  

    printf("Consumo: %d km/L\n",consumo);

    system("pause");
}