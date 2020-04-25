// C program to demonstrate declaration of
// pointer variables.
#include <stdio.h>
int main()
{
	int x = 10;
	int *ptr  = x;
	int y = &x;
	// ptr = &x;
	// ptr = 20;
	printf("the value is %d \n", x);
	printf("the address is %d\r\n", ptr);
    printf("the address is %d\r\n", y);
	return 0;
}
