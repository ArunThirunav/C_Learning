#include <stdio.h>
#include <stdlib.h>

/*
Learning array basic and counting the total size of array

Code used as reference to
*/
//void printSizeOf(int intArray[]);
//void printLength(int intArray[]);

//int main(int argc, char* argv[])
int main()
{
    int array[] = { 0, 1, 2, 3, 4, 5, 6 };

    //printf("sizeof of array: %d\n", (int) sizeof(array));
    //printSizeOf(array);

    printf("Length of array: %d\n", (int)( sizeof(array) / sizeof(array[0]) ));
    //printLength(array);
}

/*void printSizeOf(int intArray[])
{
    printf("sizeof of parameter: %d\n", (int) sizeof(intArray));
}

void printLength(int intArray[])
{
    printf("Length of parameter: %d\n", (int)( sizeof(intArray) / sizeof(intArray[0]) ));
}
*/
