#include <stdio.h>

int main() {
    int n, i, j;
    float e = 1.0;
    long int fat;

    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O valor de N deve ser positivo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fat = 1;
            for (j = 1; j <= i; j++) {
                fat *= j;
            }
            e += (float)1 / fat;
        }

        printf("O valor de E e: %.4f\n", e);
    }

    return 0;
}
