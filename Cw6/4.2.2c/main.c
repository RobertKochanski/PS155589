#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab[])
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        suma+=tab[i]*tab[i];
    }
    return suma;
}

int main()
{
    int tablica[]={1,2,3,1,2};
    int suma = foo(5, tablica);
    printf("Suma kwadratow wynosi: %i", suma);
}
