#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab[]){
    int max = tab[0];
    int ind = 0;
    for(int i = 1; i < n; i++){
        if(max < tab[i]){
            max = tab[i];
            ind = i;
        }
    }
    return ind;
}

int main()
{
    int tablica[] = {1,9,6,7,9};
    printf("%d", foo(5, tablica));
    return 0;
}
