#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2;
    int op;

    printf("Menu de opções:\n"
           "1 - Somar dois números\n"
           "2 - Raiz quadrada de um número\n"
           "Digite a opção desejada\n");

    scanf("%d" , &op);

    switch (op) {
        case 1: printf("Digite dois números: ");
        scanf("%f %f", &nota1, &nota2);
        printf("Soma = %.3f", nota1 + nota2);
        break;

        case 2: printf("Digite o número: ");
        scanf("%f", &nota1);
        printf("Raiz quadrada = %.3f\n", sqrt(nota1));
        break;

        default: printf("Opação inválida\n");
    }

    return 0;
}
