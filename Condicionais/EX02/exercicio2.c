#include <stdio.h>

void main() {
    float n1,n2,n3, media, exame;
    printf("=================================================\n");
    printf("MEDIA DE 3 NOTAS \n");
    printf("------------------------------------------------\n");
    printf("\nInforme a primeira nota: ");
    scanf("%f", &n1);
    printf("\nInforme a segunda nota: ");
    scanf("%f", &n2);
    printf("\nInforme a terceira nota: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;
    printf("\n------------------------------------------------");
    printf("\nMedia: (%.2f + %.2f + %.2f)/3 = %.2f", n1, n2, n3, media);
    printf("\n------------------------------------------------\n");

    if(media < 3) {
        printf("REPROVADO");
    } else if(media < 7) {
        exame = 12 - media;
        printf("EXAME: Deve tirar %.2f para ser aprovado", exame);
    } else if(media < 0 || media > 10) {
        printf("ERRO: As notas devem estar contidas no intervalo entre 0 e 10");
    } else {
        printf("APROVADO");
    }
    printf("\n================================================");
}
