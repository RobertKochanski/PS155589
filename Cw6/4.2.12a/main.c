#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[]){
    int odwr[n];
    for(int i=0; i<n; i++){
        odwr[n-1-i] = tab[i];
    }
    for(int i=0; i<n; i++){
        printf("%d ", odwr[i]);
    }
}

int main()
{
    int tablica[] = {1,4,8,6,4,7,9};
    foo(7, tablica);
    return 0;
}
