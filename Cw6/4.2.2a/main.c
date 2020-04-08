#include <stdio.h>
#include <stdlib.h>

float foo(int n, int tab[])
{
    float srednia=0;
    for(int i=0;i<n;i++)
    {
        srednia+=tab[i];
    }
    return srednia/n;
}

int main()
{
    int tablica[]={5,4,5,4,5};
    float srednia = foo(5, tablica);
    printf("Srednia wynosi: %f", srednia);
}
