#include <stdio.h>
#include <string.h>

void main(){
    char ch;
    printf("Enter the Char: \n");
    scanf("%c", &ch);

    if ((ch>=65 && ch<=92) || (ch<=122 && ch>=97)){
        printf("the val %d \n", ch);
        printf("the char is alphabet\r\n");
    }
    else
    {
        /* code */
        printf("the char is not alphabet \r\n");
    }



}