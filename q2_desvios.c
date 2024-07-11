#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    char sexo;
    float altura, pesoIdeal;

    printf("Digite seu sexo. M para masculino e F para feminino: ");
    scanf("%c" , &sexo);

    printf("Informe o sua altura: ");
    scanf("%f" , &altura);

    if (sexo == 'F') {
        pesoIdeal = (62.1 * altura) - 44.7;
    }
    else if (sexo == 'M') {
        pesoIdeal = (72.7 * altura) - 58;
    }
    else {
        printf("Opção inválida");
    }

    printf("Seu peso ideal seria: %f", pesoIdeal);

    return 0;
}
