#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-BR");
    /*Definição de variáveis e constantes*/
    const float SemanasDoMes = 4;
    const float CargaHoraria = 40;
    const float MesCompleto = CargaHoraria * SemanasDoMes;
    
    float HORAS_DO_MES;
    float HORAS_DA_SEMANA;
    float HORAS_EXTRAS;
    float ACRESCIMO;
    float SALARIO_pHORA;
    float SALARIO_INICIAL;
    float SALARIO_FINAL;
    /*Entrada de DADOS*/
    do{
        printf("Insira as horas trabalhadas no mês: ");
        scanf("%f", &HORAS_DO_MES);
        if(HORAS_DO_MES <= 0){
            printf("Horas negativas não são válidas.\n");
        }
    } while (HORAS_DO_MES <= 0);
    
    do{
        printf("Insira o salário por hora: R$");
        scanf("%f", &SALARIO_pHORA);
        if(SALARIO_pHORA <= 0){
            printf("Não é possivel receber valores negativos.\n");
        }
    } while(SALARIO_pHORA <= 0);
    
    
    /*Processamento*/
    HORAS_DA_SEMANA = HORAS_DO_MES / SemanasDoMes;
    HORAS_EXTRAS = HORAS_DO_MES - MesCompleto;
    ACRESCIMO = HORAS_EXTRAS * (SALARIO_pHORA * 0.5);
    SALARIO_INICIAL = SALARIO_pHORA * HORAS_DO_MES;

    if(HORAS_DA_SEMANA > CargaHoraria){
        SALARIO_FINAL = SALARIO_INICIAL + ACRESCIMO;

    } else if (HORAS_DA_SEMANA <= CargaHoraria){
        SALARIO_FINAL = SALARIO_INICIAL;
    }
    

    /*Saída de dados*/
    printf("Salário do Usuário: R$%.2f\n", SALARIO_FINAL);
    system("pause");
    return 0;
}