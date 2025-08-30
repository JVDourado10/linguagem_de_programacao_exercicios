#include <stdio.h>
#include <math.h>

long long int calcular_fatorial(int n) {
    long long int fat = 1;
    for (int j = 1; j <= n; j++) {
        fat *= j;
    }
    return fat;
}

int main() {
    int num_termos, i;
    double x, s = 0.0;
    int denominador = 1;
    int direcao = 1;

    printf("Digite o numero de termos: ");
    scanf("%d", &num_termos);

    printf("Digite um valor para X: ");
    scanf("%lf", &x);

    for (i = 1; i <= num_termos; i++) {
        long long int fat = calcular_fatorial(denominador);
        double termo = pow(x, i + 1) / fat;

        if (i % 2 == 0) {
            s += termo;
        } else {
            s -= termo;
        }

        if (denominador == 4 && direcao == 1) {
            direcao = -1;
        } else if (denominador == 1 && direcao == -1) {
            direcao = 1;
        }

        denominador += direcao;
    }

    printf("O valor da serie e: %.4lf\n", s);

    return 0;
}
