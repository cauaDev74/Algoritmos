#include <stdio.h>
#include <stdlib.h>

int main(){
    int somador;
    int patrai;
    int somatorio;


    for(somador = 0, patrai = 100; somador < 100 && patrai > 0;somador++,patrai--){
        somatorio = somador + patrai;
    }
    printf("Somatorio = %d", somatorio);

}