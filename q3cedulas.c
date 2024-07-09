#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valor, resto, qtdnotas;

    printf("Valor (em reais):");
    scanf("%d", &valor);

    qtdnotas = valor / 100;
    resto = valor % 100;

    printf("Tem %d nota(s) de 100", qtdnotas);

    qtdnotas = resto / 50;
    printf("\nTem %d nota(s) de 50", qtdnotas);
    resto = resto % 50;
    printf("\nresto: %d", resto);

    qtdnotas = resto / 20;
    printf("\nTem %d nota(s) de 20", qtdnotas);
    resto = resto % 20;

    qtdnotas = resto / 10;
    printf("\nTem %d nota(s) de 10", qtdnotas);
    resto = resto % 10;

    qtdnotas = resto / 5;
    printf("\nTem %d nota(s) de 5", qtdnotas);
    resto = resto % 5;

    qtdnotas = resto / 2;
    printf("\nTem %d nota(s) de 2", qtdnotas);
    resto = resto % 2;

        qtdnotas = resto / 1;
    printf("\nTem %d nota(s) de 1", qtdnotas);
    resto = resto % 1;

    return 0;
}
