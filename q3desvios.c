#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float  a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Não é equacao de segundo grau");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Não existem raízes reais");
        return 1;
    }
    else {
        x1 = (- b + sqrt(delta)) / 2 * a;
        x2 = (- b - sqrt(delta)) / 2 * a;
    }

    printf("O valor das raízes são: x1 = %f e x2 = %f", x1, x2);

    return 0;
}
