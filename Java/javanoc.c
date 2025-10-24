#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int conversao(int decimal){
    int resto, i = 0, j;
    int binario[32];
    int hexadecimal[32];

    int quociente = decimal;

    if(quociente == 0){
        binario[i] = 0;
        i++;
    } else{
        while (quociente > 0){
            binario[i] = quociente % 2;
            quociente = quociente / 2;
            i++;
        }
    }
    printf("Valor em Binario: ");
    for(j = i - 1; j >= 0; j--){
        printf("%d", binario[j]);
    }
    printf("\n");
    if(quociente == 0){
        hexadecimal[i] = '0';
        i++;
    } else{
        while (quociente != 0){
            resto = quociente % 16;

            if(resto < 10){
                hexadecimal[i] = resto + 48; //Converte para o caractere ASCII do número
            } else {
                hexadecimal[i] = resto + 55;
            }
            quociente = quociente / 16;
            i++;
        }
    }
    printf("Valor em Hexadecimal: ");
    for(j = i - 1; j >= 0; j--){
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
    return 0;
}

int main(){
    int valor;
    printf("Insira o valor decimal: ");
    scanf("%d", &valor);
    conversao(valor);

    return 0;
}