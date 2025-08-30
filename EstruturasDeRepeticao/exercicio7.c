#include <stdio.h>

int main() {
    int cont;
    int num1 = 0;
    int num2 = 1;
    int res;

    printf("Os primeiros 8 termos da sequencia de Fibonacci sao:\n");

    printf("%d\n", num1);
    printf("%d\n", num2);

    for (cont = 3; cont <= 8; cont++) {
        res = num1 + num2;
        printf("%d\n", res);
        num1 = num2;
        num2 = res;
    }

    return 0;
}
