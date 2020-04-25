#include "stdio.h"
#include "stdlib.h"

void main(){
    int n = 10;
    printf("the value is %d", n);
    double ar = sum(n);

    printf("the array if %lf", ar);
}

double sum (int n){

    int i;

    int array[n];

    for(i=0, i<=n, i++){

        array[i] = i;
    }
    return array;
}
