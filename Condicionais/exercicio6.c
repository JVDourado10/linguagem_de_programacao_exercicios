#include <stdio.h>

void main() {
    int n;
    printf("=================================================\n");
    printf("PAR OU IMPAR \n");
    printf("------------------------------------------------\n");
    printf("\nInforme um numero inteiro: ");
    scanf("%d", &n);

    if(n%2 == 0) {
        printf("O numero e par");
    } else {
        printf("O numero e impar");
    }
    printf("\n================================================");
}
