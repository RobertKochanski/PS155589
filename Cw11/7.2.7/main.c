#include <stdio.h>
#include <stdlib.h>

struct zespolone{
    double re, im;
};

struct zespolone dodaj(struct zespolone a, struct zespolone b){
    struct zespolone wynik;
    wynik.re = a.re + b.re;
    wynik.im = a.im + b.im;
    return wynik;
}

int main()
{
    struct zespolone z1 = {.re = 5, .im = 3};
    struct zespolone z2 = {.re = 2, .im = -5};
    struct zespolone suma = dodaj(z1, z2);

    printf("%lf + %lf*i\n", suma.re, suma.im);
    return 0;
}
