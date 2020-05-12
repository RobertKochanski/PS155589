#include <stdio.h>
#include <stdlib.h>

void solve(int **tab1, int **tab2, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tab2[i][j] = tab1[i][j];
        }
    }
}

int main()
{
    int **tablica = malloc(2*sizeof(int*));
    for(int i=0; i<3; i++){
        *(tablica+i) = malloc(3*sizeof(int));
    }

    int **tablica2 = malloc(2*sizeof(int*));
    for(int i=0; i<3; i++){
        *(tablica2+i) = malloc(3*sizeof(int));
    }

    **tablica = 4;
    *(*(tablica+0)+1) = 3;
    *(*(tablica+0)+2) = 2;
    *(*(tablica+1)+0) = 1;
    *(*(tablica+1)+1) = 5;
    *(*(tablica+1)+2) = 2;

    solve(tablica, tablica2, 2, 3);
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d %d = %d\n", i, j, tablica2[i][j]);
        }
    }
}
