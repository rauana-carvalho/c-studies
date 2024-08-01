#include <stdio.h>

int main () {
    int i, x;

    for (x = 1; x <= 10; x++){
            printf("-------------Tabuada do %2d------------\n", x);
        for (i=1; i<= 10; i = i+1){
            printf("%2d x %2d = %2d\n", i, x, i*x);}
    }
return 0;

}
