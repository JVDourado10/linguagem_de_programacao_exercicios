#include <stdio.h>

void main() {
    float sal, novosal;
    printf("=================================================\n");
    printf("CALCULA NOVO SALARIO (+25%%)\n");
    printf("------------------------------------------------\n");
    printf("\nInforme o salario atual: R$");
    scanf("%f", &sal);

    novosal = sal * 1.25;
    printf("\n------------------------------------------------");
    printf("\nResposta: R$%.2f (+25%%)  = R$%.2f", sal, novosal);
    printf("\n================================================\n\n\n");
}
