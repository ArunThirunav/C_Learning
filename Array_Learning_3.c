/* Learning two dimensional array initializing, accessing in C*/
#include<stdio.h>
#include<stdlib.h>

int main(){

int a, b;
int name[3][4] = {1,2,3,4};
//printf("%d\r\n", name[0][3]);
a = sizeof(name);
b = sizeof(name[0][0]);
printf("%d\r\n", a);
printf("%d\r\n", b);
printf("%d\r\n", (a/b));



return 0;
}
