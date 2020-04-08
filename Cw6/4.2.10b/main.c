#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab[]){
    int min = tab[0];
    for(int i = 1; i < n; i++){
        if(min > tab[i]){
            min = tab[i];
        }
    }
    return min;
}

int main()
{
    int tablica[] = {3,7,8,3,6};
    printf("%d", foo(5, tablica));
    return 0;
}
