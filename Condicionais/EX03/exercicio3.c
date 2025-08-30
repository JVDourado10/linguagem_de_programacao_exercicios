#include <stdio.h>

void main() {
    float n1,n2;
    printf("=================================================\n");
    printf("MAIOR NUMERO \n");
    printf("------------------------------------------------\n");
    printf("\nInforme o primeiro numero: ");
    scanf("%f", &n1);
    printf("\nInforme o segundo numero: ");
    scanf("%f", &n2);

    if(n1>n2) {
        printf("O maior numero e %.2f", n1);
    } else if(n2>n1) {
        printf("O maior numero e %.2f", n2);
    } else {
        printf("Os numeros sao iguais");
    }
    printf("\n================================================");
}
