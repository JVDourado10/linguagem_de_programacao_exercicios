#include <stdio.h>

void main() {
    float n1,n2,n3;
    printf("=================================================\n");
    printf("ORDENA 3 NUMEROS \n");
    printf("------------------------------------------------\n");
    printf("\nInforme o primeiro numero: ");
    scanf("%f", &n1);
    printf("\nInforme o segundo numero: ");
    scanf("%f", &n2);
    printf("\nInforme o terceiro numero: ");
    scanf("%f", &n3);

    if(n1<n2 && n1<n3) {
        if(n2<n3) {
            printf("A ordem crescente e: %.2f - %.2f - %.2f", n1, n2, n3);
        } else {
            printf("A ordem crescente e: %.2f - %.2f - %.2f", n1, n3, n2);
        }
    } else if (n2<n1 && n2<n3) {
        if(n1<n3) {
            printf("A ordem crescente e: %.2f - %.2f - %.2f", n2, n1, n3);
        } else {
            printf("A ordem crescente e: %.2f - %.2f - %.2f", n2, n3, n1);
        }
    } else {
        if(n1<n2) {
            printf("A ordem crescente e: %.2f - %.2f - %.2f", n3, n1, n2);
        } else {
            printf("A ordem crescente e: %.2f - %.2f - %.2f", n3, n2, n1);
        }
    }
    printf("\n================================================");
}
