#include <stdio.h>

int main() {
    int d1, m1, a1, d2, m2, a2;

    printf("Digite a primeira data\n");
    printf("dia (dd): ");
    scanf("%d", &d1);
    printf("mes (mm): ");
    scanf("%d", &m1);
    printf("ano (aaaa): ");
    scanf("%d", &a1);

    printf("\nDigite a segunda data\n");
    printf("dia (dd): ");
    scanf("%d", &d2);
    printf("mes (mm): ");
    scanf("%d", &m2);
    printf("ano (aaaa): ");
    scanf("%d", &a2);

    if (a1 > a2) {
        printf("A maior data e: %d-%d-%d\n", d1, m1, a1);
    } else if (a2 > a1) {
        printf("A maior data e: %d-%d-%d\n", d2, m2, a2);
    } else {
        if (m1 > m2) {
            printf("A maior data e: %d-%d-%d\n", d1, m1, a1);
        } else if (m2 > m1) {
            printf("A maior data e: %d-%d-%d\n", d2, m2, a2);
        } else {
            if (d1 > d2) {
                printf("A maior data e: %d-%d-%d\n", d1, m1, a1);
            } else if (d2 > d1) {
                printf("A maior data e: %d-%d-%d\n", d2, m2, a2);
            } else {
                printf("As datas sao iguais!\n");
            }
        }
    }

    return 0;
}
