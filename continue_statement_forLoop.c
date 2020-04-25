#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double result;

    x = 90;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);

    x = -90;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);

    x = 0;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);

    return 0;
}
