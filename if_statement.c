#include <stdio.h>

int x,y;

int main(){

x = 20;
y = 15;

if (x < y) {
    printf("yes %d \n", x);
}
else if (x>y){
    printf("in between\n");
}
else
    printf("no");

return 0;
}
