#include <stdio.h>
int maiornde3 (int n1, int n2, int n3){
    if(n1>n2 && n1>n3){
        return n1;
    }else{
        if (n2>n1 && n2>n3){
            return n2;
        }else{
            return n3;
        }
    }
}
int maiornde3certo (int n1, int n2, int n3){
    return maiorn(maiorn(n1,n2),n3);
}
int maiorn (int n1, int n2){
    if(n1>n2){
        return n1;
    }else{
        return n2;
    }
}
int main(){
    int a, b, c;
    printf("digite 3 valores inteiros ?\n ");
    scanf("%d %d %d", &a, &b, &c);
    if (a==b && a==b);
    printf("aqui esta o maior valor %d", maiornde3certo(a,b,c));
return 0;
}

