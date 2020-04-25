#include <stdio.h>

main(){

int a,b,c,d;

a = 10;
// b = 5;

d = a--;
printf("Value of d b4= %d \n", a);
printf("Value of d b4= %d \n", c);
printf("Value of d b4= %d \n", d);
printf("Size of a is = %d \n", sizeof(a));

c = d--;
printf("Value of d b4= %d \n", a);
printf("Value of c = %d \n", c);
printf("value of d aftr= %d \n", d);
}
