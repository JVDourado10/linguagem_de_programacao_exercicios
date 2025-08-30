#include <stdio.h>

void main() {
    float n1,n2,n3, media;
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
    printf("\nResposta: (%.2f + %.2f + %.2f)/3 = %.2f", n1, n2, n3, media);
    printf("\n================================================");
}
