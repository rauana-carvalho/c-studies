#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;

    printf("digite o valor de a: ");
    scanf("%d", &a);

    printf("digite o valor de b: ");
    scanf("%d", &b);

    printf("digite o valor de b: ");
    scanf("%d", &b);

    if (a > b && a > c) {
        printf("a eh o maior numero");
    }
    else if (b > a && b > c) {
        printf("b eh o maior numero");
    }
    else {
        printf("c eh o maior numero");
    }

    return 0;
}
