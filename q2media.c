#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, nota4, media;
    int peso1 = 1, peso2 = 2, peso3 =  3, peso4 = 4;

    printf("Informe suas notas do bimestre: ");
    scanf("%f %f %f %f" , &nota1, &nota2, &nota3, &nota4);

    media = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3)) / (peso1 + peso2 + peso3);

    printf("\nA média ponderada é: %.1f", media);

    return 0;
}
