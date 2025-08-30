#include <stdio.h>

void main() {
    float a,b,c;
    int i;
    printf("=================================================\n");
    printf("ORDENA COM 3 OPCOES \n");
    printf("------------------------------------------------\n");
    printf("\nInforme 3 numeros: ");
    printf("\nA: ");
    scanf("%f", &a);
    printf("\nB: ");
    scanf("%f", &b);
    printf("\nC: ");
    scanf("%f", &c);


    printf("Digite um valor para I (1, 2 ou 3): ");
    scanf("%d", &i);
    if (i == 1) {
        if (a < b && a < c) {
            if (b < c) {
                printf("A ordem crescente dos numeros e: %.2f - %.2f - %.2f\n", a, b, c);
            } else {
                printf("A ordem crescente dos numeros e: %.2f - %.2f - %.2f\n", a, c, b);
            }
        } else if (b < a && b < c) {
            if (a < c) {
                printf("A ordem crescente dos numeros e: %.2f - %.2f - %.2f\n", b, a, c);
            } else {
                printf("A ordem crescente dos numeros e: %.2f - %.2f - %.2f\n", b, c, a);
            }
        } else {
            if (a < b) {
                printf("A ordem crescente dos numeros e: %.2f - %.2f - %.2f\n", c, a, b);
            } else {
                printf("A ordem crescente dos numeros e: %.2f - %.2f - %.2f\n", c, b, a);
            }
        }
    } else if (i == 2) {
        if (a > b && a > c) {
            if (b > c) {
                printf("A ordem decrescente dos numeros e: %.2f - %.2f - %.2f\n", a, b, c);
            } else {
                printf("A ordem decrescente dos numeros e: %.2f - %.2f - %.2f\n", a, c, b);
            }
        } else if (b > a && b > c) {
            if (a > c) {
                printf("A ordem decrescente dos numeros e: %.2f - %.2f - %.2f\n", b, a, c);
            } else {
                printf("A ordem decrescente dos numeros e: %.2f - %.2f - %.2f\n", b, c, a);
            }
        } else {
            if (a > b) {
                printf("A ordem decrescente dos numeros e: %.2f - %.2f - %.2f\n", c, a, b);
            } else {
                printf("A ordem decrescente dos numeros e: %.2f - %.2f - %.2f\n", c, b, a);
            }
        }
    } else if (i == 3) {
        if (a > b && a > c) {
            printf("A ordem desejada e: %.2f - %.2f - %.2f\n", b, a, c);
        } else if (b > a && b > c) {
            printf("A ordem desejada e: %.2f - %.2f - %.2f\n", a, b, c);
        } else {
            printf("A ordem desejada e: %.2f - %.2f - %.2f\n", a, c, b);
        }
    } else {
        printf("Opcao invalida. Por favor, escolha 1, 2 ou 3.\n");
    }

    printf("\n================================================");
}
