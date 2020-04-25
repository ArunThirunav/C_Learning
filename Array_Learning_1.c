#include <stdio.h>
#include <stdlib.h>

/*
Learning array basic and counting the total size of array
*/

int main(){

    int i;
    double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    int array[] = { 0, 1, 2, 3, 4, 5, 6 };

    for (i=0; i<=(int)(sizeof(balance)/sizeof(balance[0])); i++){
        printf("%ld \r\n",sizeof(balance) );
        printf("%ld \r\n",sizeof(balance[0]) );
        printf("%d \r\n", i);
    }
}

