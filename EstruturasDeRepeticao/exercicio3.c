#include <stdio.h>

int main() {
    int n, num, i, j;
    long long int fat;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nDigite um numero inteiro e positivo: ");
        scanf("%d", &num);

        if (num < 0) {
            printf("Numero invalido. O fatorial nao pode ser calculado para numeros negativos.\n");
        } else {
            fat = 1;
            for (j = 1; j <= num; j++) {
                fat *= j;
            }
            printf("O fatorial de %d e: %lld\n", num, fat);
        }
    }

    return 0;
}
