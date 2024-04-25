#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int f;
    float c;

    printf("Tabela de conversão Fahrenheit para Celcius\n\n");
    for(f=50; f<=65; f++){
        c = (f-32)/1.8;
        printf("F = %d --- C = %.2f\n", f, c);
    }

    return 0;
}
