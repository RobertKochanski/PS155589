#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab[]){
    int min = tab[0];
    int ind = 0;
    for(int i = 1; i < n; i++){
        if(min > tab[i]){
            min = tab[i];
            ind = i;
        }
    }
    return ind;
}

int main()
{
    int tablica[] = {9,7,1,3,1};
    printf("%d", foo(5, tablica));
    return 0;
}
