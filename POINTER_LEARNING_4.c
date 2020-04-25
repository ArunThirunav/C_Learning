#include<stdio.h>
#include<stdlib.h>

int main(){
    int x = 10;
    int *y = &x;
    int *z = NULL;
    printf("the value of x is: %d \r\n", *y);
    printf("the val of NULL pointer: %d", z);
    return 0;
}
