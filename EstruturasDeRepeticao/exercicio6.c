#include <stdio.h>

int main() {
    int cont, codigo, nht;
    char turno, categoria;
    float sal_min = 450.00;
    float valor, sal_inicial, aux, sal_final;

    for (cont = 1; cont <= 10; cont++) {
        printf("--- Funcionario %d ---\n", cont);

        printf("Codigo: ");
        scanf("%d", &codigo);

        printf("Numero de horas trabalhadas: ");
        scanf("%d", &nht);

        do {
            printf("Turno (M, V ou N): ");
            scanf(" %c", &turno);
        } while (turno != 'M' && turno != 'V' && turno != 'N');

        do {
            printf("Categoria (O ou G): ");
            scanf(" %c", &categoria);
        } while (categoria != 'O' && categoria != 'G');

        if (categoria == 'G') {
            if (turno == 'N') {
                valor = sal_min * 0.18;
            } else {
                valor = sal_min * 0.15;
            }
        } else {
            if (turno == 'N') {
                valor = sal_min * 0.13;
            } else {
                valor = sal_min * 0.10;
            }
        }

        sal_inicial = nht * valor;

        if (sal_inicial <= 300.00) {
            aux = sal_inicial * 0.20;
        } else if (sal_inicial < 600.00) {
            aux = sal_inicial * 0.15;
        } else {
            aux = sal_inicial * 0.05;
        }

        sal_final = sal_inicial + aux;

        printf("\n--- Dados do Funcionario %d ---\n", cont);
        printf("Codigo: %d\n", codigo);
        printf("Horas trabalhadas: %d\n", nht);
        printf("Valor da hora trabalhada: R$ %.2f\n", valor);
        printf("Salario inicial: R$ %.2f\n", sal_inicial);
        printf("Auxilio alimentacao: R$ %.2f\n", aux);
        printf("Salario final: R$ %.2f\n", sal_final);
        printf("-------------------------------\n\n");
    }

    return 0;
}
