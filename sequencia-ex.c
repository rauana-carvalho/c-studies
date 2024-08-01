#include <stdio.h>

int main () {
    int i, j;

    for (i = 1; i <= 10; i++){
        for (j = 1; j <= i; j = j+1){
            printf("%d", j);
        }
        printf("\n");
    }
return 0;

}
