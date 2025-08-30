#include <stdio.h>

int main() {
    int cont, cod, num_vei, num_acid;
    int maior_acid = 0, cid_maior_acid = 0;
    int menor_acid = 999999, cid_menor_acid = 0;
    float soma_vei = 0;
    float soma_acid = 0;
    int cont_acid = 0;
    float media_vei, media_acid;

    for (cont = 1; cont <= 5; cont++) {
        printf("--- Cidade %d ---\n", cont);
        printf("Codigo da cidade: ");
        scanf("%d", &cod);
        printf("Numero de veiculos: ");
        scanf("%d", &num_vei);
        printf("Numero de acidentes: ");
        scanf("%d", &num_acid);

        if (num_acid > maior_acid) {
            maior_acid = num_acid;
            cid_maior_acid = cod;
        }

        if (num_acid < menor_acid) {
            menor_acid = num_acid;
            cid_menor_acid = cod;
        }

        soma_vei += num_vei;

        if (num_vei < 2000) {
            soma_acid += num_acid;
            cont_acid++;
        }
    }

    printf("\n--- Resultados ---\n");
    printf("Maior indice de acidentes: %d (Cidade %d)\n", maior_acid, cid_maior_acid);
    printf("Menor indice de acidentes: %d (Cidade %d)\n", menor_acid, cid_menor_acid);

    media_vei = soma_vei / 5;
    printf("Media de veiculos nas cinco cidades: %.2f\n", media_vei);

    if (cont_acid == 0) {
        printf("Nao ha cidades com menos de 2000 veiculos.\n");
    } else {
        media_acid = soma_acid / cont_acid;
        printf("Media de acidentes em cidades com menos de 2000 veiculos: %.2f\n", media_acid);
    }

    return 0;
}
