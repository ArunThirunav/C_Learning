
#include "stdio.h"

//structure employee name and surname only works when using char* pointers

struct employee {
    char *name;
    char *surname;
};

int main() {
    struct employee worker;
    worker.name = "Robert";
    worker.surname = "Woz";

    printf("\n");
    printf("%s", worker.name);
    printf("\n");
    printf("%s", worker.surname);
    printf("\n");

    char name[] = "Robert";   //declaration of array with using [] postfix

    for (int i = 0; i < 7; i++) {
        printf("%c", worker.name[i]);
    }

    printf("\n");

    char *surname = "Woz";   //declaration of array wit using char* pointer

    for (int i = 0; i < 4; i++) {
        printf("%c", surname[i]);
    }

    printf("\n");

    return (0);
}