#include <stdio.h>

void main() {
    float sal, salreceber, grat, imp;
    printf("=================================================\n");
    printf("CALCULA SALARIO A RECEBER \n");
    printf("------------------------------------------------\n");
    printf("\nInforme o salario atual: R$");
    scanf("%f", &sal);

    grat = sal * 0.05;
    imp = sal * 0.07;
    salreceber = sal + grat - imp;

    printf("\n------------------------------------------------");
    printf("\nResposta: R$%.2f (+5%% de gratificacao) (-7%% de imposto)  = R$%.2f", sal, salreceber);
    printf("\n================================================\n\n\n");
}
