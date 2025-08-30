#include <stdio.h>

void main() {
    float sal, salreceber, grat, imp;
    printf("=================================================\n");
    printf("CALCULA SALARIO A RECEBER \n");
    printf("------------------------------------------------\n");
    printf("\nInforme o salario atual: R$");
    scanf("%f", &sal);

    grat = 50;
    imp = sal * 0.1;
    salreceber = sal + grat - imp;

    printf("\n------------------------------------------------");
    printf("\nResposta: R$%.2f (+R$50 de gratificacao) (-10%% de imposto)  = R$%.2f", sal, salreceber);
    printf("\n================================================\n\n\n");
}
