#include <stdio.h>
#include <locale.h>
#define S 1234

int main() {
    setlocale(LC_ALL, "Portuguese");

    int senha, qt = 0;

    printf("Qual a senha? ");
    scanf("%d", senha);

    while (senha != S) {
        printf("Senha Incorreta\n Tente novamente");
        qt++;
        printf("Qual a senha? ");
        scanf("%d", senha);

    }
    printf("Senha correta");

    return 0;
}
