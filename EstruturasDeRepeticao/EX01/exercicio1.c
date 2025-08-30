#include <stdio.h>

int main() {
    int i, ano_atual;
    float salario, percentual;

    printf("Informe o ano atual: ");
    scanf("%d", &ano_atual);

    salario = 1000.0;
    percentual = 0.015;

    salario = salario + percentual * salario;

    for (i = 2007; i <= ano_atual; i++) {
        percentual = 2 * percentual;
        salario = salario + percentual * salario;
    }

    printf("O salario atual do funcionario em %d e: R$ %.2f\n", ano_atual, salario);

    return 0;
}
