#include <stdio.h>
#include <stdlib.h>

int main(){
    const int horas = 24;
    const int minutos = horas * 60;
    const int segundos = minutos * 60;
    int dias, dHoras, dMinutos, dSegundos;

    printf("Insira quantidade de dias: ");
    scanf("%d", &dias);

    dHoras = dias * horas;
    dMinutos = dias * minutos;
    dSegundos = dias * segundos;

    printf("Dias: %d\n",dias);
    printf("Horas: %d\n",dHoras);
    printf("Minutos: %d\n",dMinutos);
    printf("Segundos: %d\n",dSegundos);

    system("pause");
    return 0;
}