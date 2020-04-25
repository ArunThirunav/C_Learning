#include "stdio.h"
#include "stdbool.h"

int main(){
int a = 0;
bool status = true;

while(status){
    if (a <20){
        a = a+1;
        printf("the a: %d", a);
    }
        else {
            status = false;
        }
    }
}
