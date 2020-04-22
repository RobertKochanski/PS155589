#include <stdio.h>
#include <stdlib.h>

int foo(int n){
    int wynik;
    for(int i=0; i*i*i*i<=n; i++){
        wynik = i;
    }
    return wynik;
}

int main()
{
    printf("%d\n", foo(2));
    printf("%d\n", foo(16));
    printf("%d\n", foo(29));
    printf("%d\n", foo(99));
}
