#include <stdio.h>
#include <math.h>
void mostraS (int n){
    int i;
    printf("S = ");
    for (i=1;i<=n;i++){
        printf("%.f/%d",pow(i,2)+1,i+3);
        if (i<n)
            printf (" + ");

    }
}
float calculaS (int n){
    float S=0;
    int i;
    for (i=1;i<=n;i++){
    S = S + (pow(i,2)+1)/(i+3);
    }
    return S;
}

int main (){
    int n;
    printf("digite o valor de n, seno n > 0 ");
    scanf("%d", &n);
    while(n<=0);
    mostraS(n);
    printf ("\n\nSoma = %f",calculaS(n));
return 0;
}
