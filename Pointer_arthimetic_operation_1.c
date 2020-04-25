#include<stdio.h>
#include<stdlib.h>

int main(){

    int lim = 3;
    int var[3] = {10, 200, 300};
    int *ptr, i;
    ptr = var;

    for(i=0; i<lim; i++){

        printf("the address of array is var[%d] is %d \n", i, ptr);
        printf("the value of array is var[%d] is %x \n", i, *ptr);
        ptr++;

    }
    if (__STDC_VERSION__ >= 201112L):
        printf("We are using C11!\n");
    // printf("the c version is %ld", __STDC_VERSION__);
    return 0;
}
