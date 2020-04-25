#include <stdio.h>

main(){

    int a = 10;
    int b = 12;
    int i,j;

    for (i=0; i<=a;i++){
        for(j=0; j<=b;j++){
            printf("the value of i=%d and j=%d\n", i,j);
        }
    }
}
