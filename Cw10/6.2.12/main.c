#include <stdio.h>
#include <stdlib.h>

int solve(int ** tab, int n, int m){
    int suma = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            suma += *(*(tab+i)+j);
        }
    }
    return suma;
}

int main()
{
    int **tablica = malloc(2*sizeof(int*));
    for(int i=0; i<2; i++){
        *(tablica+i) = malloc(2*sizeof(int));
    }
    **tablica = 3;
    *(*(tablica+0)+1) = 2;
    *(*(tablica+1)+0) = 1;
    *(*(tablica+1)+1) = 0;
    printf("%d", solve(tablica, 2, 2));
    return 0;
}
