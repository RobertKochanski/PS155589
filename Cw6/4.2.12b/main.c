#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[]){
    int temp = tab[0];

    for(int i=0; i<n-1; i++){
        tab[i]=tab[i+1];
    }
    tab[n-1] = temp;

    for(int i=0; i<n; i++){
        printf("%d ", tab[i]);
    }
}

int main()
{
    int tablica[] = {1,4,8,6,4,7,9};
    foo(7, tablica);
    return 0;
}
