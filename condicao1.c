#include <stdio.h>
#include <math.h>

int main(){
    int a, b;

    printf("digite o valor de a: ");
    scanf("%d", &a);

    printf("digite o valor de b: ");
    scanf("%d", &b);

    if (a > b){
        puts("a eh maior do que b");
    }
    else{
        puts("b eh maior do que a");
        printf("a=%d e b=%d", a, b);
    }
    printf("fim");

    return 0;
}
