#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab[]){
    int max = tab[0];
    for(int i = 1; i < n; i++){
        if(tab[i]<0){
            tab[i]=-tab[i];
        }
        if(max < tab[i]){
            max = tab[i];
        }
    }
    return max;
}

int main()
{
    int tablica[] = {1,5,6,7,-9};
    printf("%d", foo(5, tablica));
    return 0;
}
