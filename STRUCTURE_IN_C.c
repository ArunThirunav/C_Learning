#include "stdio.h"

typedef struct name {
    int x,y;

}name;

int main(){
    struct name i = (0);

    printf("the val is %d", i.x);

    return 0;
}
