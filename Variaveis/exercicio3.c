#include <stdio.h>

void main() {
    float n1,n2,n3,p1,p2,p3, media;
    printf("=================================================\n");
    printf("MEDIA PONDERADA DE 3 NOTAS \n");
    printf("------------------------------------------------\n");
    printf("\nInforme a primeira nota: ");
    scanf("%f", &n1);
    printf("\nInforme o primeiro peso: ");
    scanf("%f", &p1);
    printf("\nInforme a segunda nota: ");
    scanf("%f", &n2);
    printf("\nInforme o segundo peso: ");
    scanf("%f", &p2);
    printf("\nInforme a terceira nota: ");
    scanf("%f", &n3);
    printf("\nInforme o terceiro peso: ");
    scanf("%f", &p3);

    media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);
    printf("\n------------------------------------------------");
    printf("\nResposta: (%.2f x %.2f + %.2f x %.2f + %.2f x %.2f)/(%.2f + %.2f + %.2f) = %.2f", n1, p1, n2, p2, n3, p3, p1, p2, p3, media);
    printf("\n================================================");
}
