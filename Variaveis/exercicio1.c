#include <stdio.h>

void main() {
    int n1,n2,n3,n4, soma;
    printf("=================================================\n");
    printf("SOMAR 4 NUMEROS \n");
    printf("------------------------------------------------\n");
    printf("\nInforme o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nInforme o segundo numero: ");
    scanf("%d", &n2);
    printf("\nInforme o terceiro numero: ");
    scanf("%d", &n3);
    printf("\nInforme o quarto numero: ");
    scanf("%d", &n4);

    soma = n1 + n2 + n3 + n4;
    printf("\n------------------------------------------------");
    printf("\nResposta: %d + %d + %d + %d = %d", n1, n2, n3, n4, soma);
    printf("\n================================================");
}
