#include <stdio.h>
#include <locale.h>

int main() {

    int n, soma = 0, q = 0, qn = 0, menor, maior;
    float media;

    printf("Digite um numero, 0 para finalizar: ");
    scanf("%d", &n);

    maior = menor = n;

    while (n!=0) {
        soma = soma + n;
        printf("\nSoma = %d\n", soma);
        q++; //q = q + 1

        if (n > maior)
            maior = n;
        if (n < menor)
            menor = n;
        if (n<0)
            qn++;

        printf("Digite outro numero, 0 para finalizar: ");
        scanf("%d", &n);
    }
        printf("\nSoma dos numeros = %d\n", soma);
        media = (float) soma / q;
        printf("Media dos numeros = %.2f\n", media);

        printf("O maior numero eh = %d, O menor número é = %d\n", maior, menor);
        printf("Quantidade de números negativos é: %d", qn);



    return 0;
}
