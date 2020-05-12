#include <stdio.h>
#include <stdlib.h>

int (*solve(int n, int m))[]{
    return malloc(n*sizeof(int[m]));
}

int main()
{
    int n = 5;
    int m = 3;
    int **tablica = solve(n, m);
    *tablica = 1;
    *(tablica+1) = 2;
    *(tablica+2) = 3;
    *(tablica+3) = 4;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d %d = %d\n", i, j, *(tablica+i*m+j));
        }
    }
}
