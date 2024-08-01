#include <stdio.h>

int main () {
    int i, soma, n;

    printf("Digite n: ");
    scanf("%d", &n)

    soma = 0;

    for (i=1; i<= n; i = i+1){
        if (n % 1 == 0){
            soma++;
        }
    }

    if (soma == 2){
        printf("%d eh primo", n);
    }
    else {
        printf("%d nao eh primo", n);
    }

return 0;

}
