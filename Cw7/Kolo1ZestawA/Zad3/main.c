#include <stdio.h>
#include <stdlib.h>

void foo(double *x){
    *x = 1/(*x);
}

int main()
{
    double a = 5;
    double b = 8;
    foo(&a);
    foo(&b);
    printf("%lf\n", a);
    printf("%lf", b);
}
