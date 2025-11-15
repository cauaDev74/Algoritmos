#include <stdio.h>
#include <stdlib.h>

int main(){
    float height;
    float idealWeight;
    char genero;

    printf("========PESO IDEAL========\n\n");

    printf("M - Masculino.\n");
    printf("F - Feminino.\n");

    scanf("%c", &genero);

    printf("Insira a altura: ");
    scanf("%f", &height);

    switch (genero){

    case 'F':
        idealWeight = (72.7 * height) - 58;

        printf("Peso ideal feminino: %.1f", idealWeight);
        break;
    case 'M':
        idealWeight = (62.1 * height) - 44.7;

        printf("Peso ideal masculino: %.1f", idealWeight);
        break;
    default:
        break;
    }

    return 0;
}