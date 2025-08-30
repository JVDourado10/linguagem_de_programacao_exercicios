#include <stdio.h>

int main() {
    int cont;
    float n1, n2, media;
    int ta = 0, te = 0, tr = 0;
    float total_classe = 0;
    float media_classe;

    for (cont = 1; cont <= 6; cont++) {
        printf("--- Aluno %d ---\n", cont);
        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);

        media = (n1 + n2) / 2;
        printf("Media: %.2f\n", media);

        if (media <= 3.0) {
            tr++;
            printf("Situacao: Reprovado\n");
        } else if (media > 3.0 && media < 7.0) {
            te++;
            printf("Situacao: Exame\n");
        } else {
            ta++;
            printf("Situacao: Aprovado\n");
        }

        total_classe += media;
        printf("\n");
    }

    media_classe = total_classe / 6;

    printf("--- Resultados da Classe ---\n");
    printf("Total de alunos aprovados: %d\n", ta);
    printf("Total de alunos de exame: %d\n", te);
    printf("Total de alunos reprovados: %d\n", tr);
    printf("Media da classe: %.2f\n", media_classe);

    return 0;
}
