#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int pares = 0;
    int num[20];
    for(int k = 0; k < 20; k++){
        num[k] = 1 + rand()%100;
        printf("Numero %d:\n %d\n", k +1, num[k]);
    }
    for(int i = 0;i < 20;i++){
        if (num[i]%2==0){
            pares++;
        }
        
    }
    printf("Quantidade de valores pares: %d\n", pares);

    system("pause");
    return 0;
}