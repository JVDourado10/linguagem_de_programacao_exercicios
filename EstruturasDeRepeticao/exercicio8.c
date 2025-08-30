#include <stdio.h>

int main() {
    int num_termos, i;
    int num1 = 2;
    int num2 = 7;
    int num3 = 3;

    printf("Digite o numero de termos: ");
    scanf("%d", &num_termos);

    if (num_termos >= 1) {
        printf("%d\n", num1);
    }
    if (num_termos >= 2) {
        printf("%d\n", num2);
    }
    if (num_termos >= 3) {
        printf("%d\n", num3);
    }

    for (i = 4; i <= num_termos; i++) {
        if ((i - 1) % 3 == 0) {
            num1 *= 2;
            printf("%d\n", num1);
        } else if ((i - 1) % 3 == 1) {
            num2 *= 3;
            printf("%d\n", num2);
        } else {
            num3 *= 4;
            printf("%d\n", num3);
        }
    }

    return 0;
}
