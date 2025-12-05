#include <stdio.h>
#include <stdlib.h>

int main(){
    int people = 0;
    float altura, somadAlturaH = 0, somadAlturaM = 0;
    float maiorA = 0, menorA = 0;
    float mediaF;
    int qtdHomi = 0, qtdMuie = 0;
    char sexo;

    do{
        printf("Pessoa %d\n\n", people+1);
        printf("Escolha o sexo(M para masculino e F para feminino).\n");
        scanf(" %c", &sexo);
        printf("Insira altura em metros: ");
        scanf("%f", &altura);
        people++;

        if(altura > maiorA){
            maiorA = altura;
        }else if(menorA == 0){
            menorA = altura;
        }else if (altura < menorA && altura != 0){
            menorA = altura;
        }
        

        if(sexo == 'm' || sexo == 'M'){
            qtdHomi++;
            somadAlturaH += altura;
        }else if(sexo == 'F' || sexo == 'f'){
            somadAlturaM += altura;
            qtdMuie++;
        }
    } while (people != 15);

    mediaF = somadAlturaM/qtdMuie;
    
    printf("Maior altura: %.2f\nMenor altura: %.2f\n", menorA, menorA);
    printf("Media de altura feminina: %.2f\n", mediaF);
    printf("Quantidade de Homens: %d\n", qtdHomi);
    

}