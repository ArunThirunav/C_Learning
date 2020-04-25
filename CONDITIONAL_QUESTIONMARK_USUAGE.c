#include "stdio.h"

int main(){
    int a, b;
    char *c;
    a = 10;
    b = 5;
    c = (a<b)? "true":"false";
    printf("the answer is %s ", c);
    return 0;
}
