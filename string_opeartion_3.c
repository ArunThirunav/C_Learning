#include"stdio.h"
#include"string.h"

typedef struct book{
    /* data */
    int id;
    double price;
    char *title;
}book;



void main(){
    char name[] = "hello";
    int lenOfStr = strlen(name);
    printf(("the char is: %s\n"), name);
    printf("the len is: %d\r\n", lenOfStr);


    int i;
    // for(i=0; i<100; ++i){
    //     printf("the val of i is %d\n", i);
    // }

    book book1;
    book book2;
    int a;
    // printf("enter the val: ");
    // scanf("%d", &book2.id);

    book1.id = 100;
    book2.title = "Programming";
    book1.title = "c lang";

    printf("the size of book : %ld \n", sizeof(book2.title));


    printf("the id is %d \r\n", book1.id);
    printf("the book2 title  is %s \r\n", book2.title);
    printf("the title is %s \r\n", book1.title);
    // printf("the id is %d \r\n", book2.id);
    
}