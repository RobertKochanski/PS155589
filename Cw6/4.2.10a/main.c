#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab[]){
    int max = tab[0];
    for(int i = 1; i < n; i++){
        if(max < tab[i]){
            max = tab[i];
        }
    }
    return max;
}

int main()
{
    int tablica[] = {3,7,8,3,6};
    printf("%d", foo(5, tablica));
    return 0;
}
