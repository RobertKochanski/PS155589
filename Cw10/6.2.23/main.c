#include <stdio.h>
#include <stdlib.h>

void solve(int **tab, int n, int m){
    int *temp = tab[n-1];
    for(int i=n-1;i>0;i--){
        tab[i] = tab[i-1];
    }
    tab[0] = temp;
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

    solve(tablica, 2, 2);

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d %d = %d\n", i, j, tablica[i][j]);
        }
    }
    return 0;
}
