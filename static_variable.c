#include <stdio.h>

void foo()
{
    int a = 10;
    static int sa = 10;

    a += 5;
    sa += 5;

    printf("a = %d, sa = %d\n", a, sa);
}


int main()
{
    int i, sa;

    for (i = 0; i < 10; ++i)
        printf("sa = %d\n", sa);
        foo();

}
