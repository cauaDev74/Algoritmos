#include <stdio.h>
#include <stdlib.h>

int main(){
    int people = 0;
    int idade;
    int f1,q1,f2,q2,f3,q3,f4,q4;
    float media1, media2, media3, media4;
    float peso;
    float percent1, percent2, percent3, percent4;

    do{
        printf("Pessoa %d\n\n", people+1);
        printf("Insira a idade: ");
        scanf("%d", &idade);
        people++;
        printf("Insira a idade: ");
        scanf("%f", &peso);

        switch (idade)
        {
        case 1 ... 10:
            f1 += peso;
            q1++;
            break;
        case 11 ... 20:
            f2 += peso;
            q2++;
            break;
        case 21 ... 30:
            f3 += peso;
            q3++;
            break;
        default:
            if(idade < 1){
                printf("Idade invalida.\n");
            }else if (idade >= 31){
                f4 += peso;
                q4++;
            }
            
            break;
        }
        
        people++;

    } while (people != 15);
    
    media1 = f1/q1;
    media2 = f2/q2;
    media3 = f3/q3;
    media4 = f4/q4;

    percent1 = (float)q1/people*100;
    percent2 = (float)q2/people*100;
    percent3 = (float)q3/people*100;
    percent4 = (float)q4/people*100;

    printf("Media dos pesos de acordo com a faixa etaria: \n\n");
    printf("Media dos pesos de pessoas de 1 a 10 anos: %f\n", media1);
    printf("Media dos pesos de pessoas de 11 a 20 anos: %f\n", media2);
    printf("Media dos pesos de pessoas de 21 a 30 anos: %f\n", media3);
    printf("Media dos pesos de pessoas de mais de 31 anos: %f\n", media4);
    
    printf("Porcetagem de cada faixa etaria: \n\n");
    printf("1 a 10 anos: %.1f%%\n", percent1);
    printf("11 a 20 anos: %.1f%%\n", percent2);
    printf("21 a 30 anos: %.1f%%\n", percent3);
    printf("Mais 31 anos: %.1f%%\n", percent4);

}