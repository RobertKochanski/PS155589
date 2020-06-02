#include <stdio.h>
#include <stdlib.h>

union Test{
    int a;
    float b;
};

int main()
{
    union Test a1;
    a1.a = 4;
    a1.b = 4.4;
    union Test a2;
    a2.a = 5;
    a2.b = 5.5;
    union Test a3;
    a3.a = 2;
    a3.b = 2.2;
    union Test a4;
    a4.a = 8;
    a4.b = 8.8;
    union Test a5;
    a5.a = 1;
    a5.b = 1.1;
    union Test a6;
    a6.a = 9;
    a6.b = 9.9;

    union Test tablica[6] = {a1, a2, a3, a4, a5, a6};
    for(int i=0;i<6;i++){
        printf("%i , %f\n", tablica[i].a, tablica[i].b);
    }
    return 0;
}
