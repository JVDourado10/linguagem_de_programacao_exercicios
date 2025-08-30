#include <stdio.h>

void main() {
    float n1,n2,n3,n4;
    printf("=================================================\n");
    printf("ORDENA 4 NUMEROS (DECRESCENTE) \n");
    printf("------------------------------------------------\n");
    printf("\nInforme 3 numeros em ordem crescente: ");
    printf("\n1: ");
    scanf("%f", &n1);
    printf("\n2: ");
    scanf("%f", &n2);
    printf("\n3: ");
    scanf("%f", &n3);

    printf("\nDigite um numero (fora de ordem): ");
    scanf("%f", &n4);
    if(n4>n3) {
        printf("A ordem decrescente e: %.2f - %.2f - %.2f - %.2f", n4, n3, n2, n1);
    } else if (n4>n2 && n4<n3) {
        printf("A ordem decrescente e: %.2f - %.2f - %.2f - %.2f", n3, n4, n2, n1);
    } else if (n4>n1 && n4<n2) {
        printf("A ordem decrescente e: %.2f - %.2f - %.2f - %.2f", n3, n2, n4, n1);
    } else {
        printf("A ordem decrescente e: %.2f - %.2f - %.2f - %.2f", n3, n2, n1, n4);
    }
    printf("\n================================================");
}
