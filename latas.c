#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float altura, largura, area;
    float rendimentoLata, latas;

    printf("Largura da parede (em m: ");
    scanf("%f", &largura);

    printf("Altura da parede (em m: ");
    scanf("%f", &altura);

    printf("Rendimento da lata (em m2/l): ");
    scanf("%f", &rendimentoLata);

    area = largura * altura;
    latas = area / rendimentoLata;
    printf("São necessários %.1 f latas. \n", latas);

    return 0;
}
