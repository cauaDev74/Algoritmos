#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float a,b;
    printf("Insira o valor: ");
    scanf("%f",&a);
    printf("Insira o valor: ");
    scanf("%f",&b);
    
    if(a < b){
        printf("%.1f %.1f\n",a,b);
    } else if (b < a){
        printf("%.1f %.1f\n",b,a);
    }
    system("pause");
    return 0;
}