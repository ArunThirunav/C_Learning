#include <stdio.h>

int main(){

int a, b;
char c;

printf("Enter the numbers: ");

scanf("%d %d", &a, &b);

c = (a==b)? printf("Values are  equal"):printf("Values are not equal");

return 0;
}
