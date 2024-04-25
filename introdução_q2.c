#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;

    printf("Informe suas notas: ");
    scanf("%f %f %f" , &nota1, &nota2, &nota3);

    printf("Informe os pesos das notas correspondentes: ");
    scanf("%d %d %d" , &peso1, &peso2, &peso3);

    media = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3)) / (peso1 + peso2 + peso3);

    printf("\nA média ponderada é: %.1f", media);

    return 0;
}
