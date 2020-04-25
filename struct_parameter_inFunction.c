#include<stdio.h>
#include<string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

/* function declaration */
void printBook( struct Books book );

int main( )
{
    struct Books Book1; /* Declare Book1 of type Book */
    struct Books Book2; /* Declare Book2 of type Book */
    /* book 1 specification */
    // Book1.title = "C";
    // printf("loc of title: %s", Book1.title);
    strcpy( Book1.title, "C Programming");
    printf("the size of book is : %ld", sizeof(Book1.title));
    strcpy( Book1.author, "Nuha Ali");
    strcpy( Book1.subject, "C Programming Tutorial");
    Book1.book_id = 6495407;
    /* book 2 specification */
    strcpy( Book2.title, "Telecom Billing");
    strcpy( Book2.author, "Zara Ali");
    strcpy( Book2.subject, "Telecom Billing Tutorial");
    Book2.book_id = 6495700;
    /* print Book1 info */
    printBook( Book1 );
    /* Print Book2 info */
    printBook( Book2 );
    return 0;
}
void printBook( struct Books book )
{
    printf( "Book title : %s\n", book.title);
    printf( "Book author : %s\n", book.author);
    printf( "Book subject : %s\n", book.subject);
    printf( "Book book_id : %d\n", book.book_id);
}
    