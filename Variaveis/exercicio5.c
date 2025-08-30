#include <stdio.h>

void main() {
    float sal, aumento, perc, novosal;
    printf("=================================================\n");
    printf("CALCULA NOVO SALARIO \n");
    printf("------------------------------------------------\n");
    printf("\nInforme o salario atual: R$");
    scanf("%f", &sal);
    printf("\nInforme o aumento percentual: (%%)");
    scanf("%f", &perc);

    aumento = sal * perc/100;
    novosal = sal + aumento;
    printf("\n------------------------------------------------");
    printf("\nResposta: R$%.2f (+R$%.2f%%)  = R$%.2f", sal, perc, novosal);
    printf("\n================================================\n\n\n");
}
