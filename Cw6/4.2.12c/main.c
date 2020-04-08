#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[]){
    int temp = tab[n-1];

    for(int i=n-2; i>=0; i--){
        tab[i+1]=tab[i];
    }
    tab[0] = temp;

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
