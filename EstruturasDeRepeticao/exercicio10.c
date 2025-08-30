#include <stdio.h>

int main() {
    int cont_time, cont_jog;
    int idade, qtde_menor_18 = 0;
    float peso, alt, tot_peso_80 = 0;
    float media_idade_time;
    float soma_idade_time;
    float soma_altura_total = 0;
    float media_altura_total;
    float porcentagem_80kg;

    for (cont_time = 1; cont_time <= 5; cont_time++) {
        soma_idade_time = 0;
        printf("--- Time %d ---\n", cont_time);

        for (cont_jog = 1; cont_jog <= 11; cont_jog++) {
            printf("Jogador %d\n", cont_jog);
            printf("Idade: ");
            scanf("%d", &idade);
            printf("Peso: ");
            scanf("%f", &peso);
            printf("Altura: ");
            scanf("%f", &alt);

            if (idade < 18) {
                qtde_menor_18++;
            }

            soma_idade_time += idade;
            soma_altura_total += alt;

            if (peso > 80) {
                tot_peso_80++;
            }
        }
        media_idade_time = soma_idade_time / 11.0;
        printf("Media de idade do time %d: %.2f\n\n", cont_time, media_idade_time);
    }

    printf("--- Resultados do Campeonato ---\n");
    printf("Quantidade de jogadores com menos de 18 anos: %d\n", qtde_menor_18);

    media_altura_total = soma_altura_total / 55.0;
    printf("Media de altura de todos os jogadores: %.2f\n", media_altura_total);

    porcentagem_80kg = (tot_peso_80 * 100.0) / 55.0;
    printf("Porcentagem de jogadores com mais de 80kg: %.2f%%\n", porcentagem_80kg);

    return 0;
}
