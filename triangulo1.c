#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int altura, base;
    float area;

    print("Base: ");
    scanf("%d", &base);

    print("Altura: ");
    scanf("%d", &altura);

    area = (base * altura) / 2.0;
    printf("Area %.2f latas. \n", area);

    return 0;
}

