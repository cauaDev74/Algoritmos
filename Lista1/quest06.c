#include <stdio.h>
#include <stdlib.h>

int main(){
    //Entrada
    float f, celsius;
    printf("Insira Temperatura em Fahrenheit: ");
    scanf("%f", &f);

    celsius = (f-32)*5 / 9;
    printf("%.1f graus celsius", celsius);
}