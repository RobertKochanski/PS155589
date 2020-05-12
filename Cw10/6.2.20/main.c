#include <stdio.h>
#include <stdlib.h>

void solve(int **tab1, int **tab2, int n, int m){
    int temp[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp[i][j] = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp[i][j];
        }
    }
}

int main()
{
    int **tablica = malloc(2*sizeof(int*));
    for(int i=0; i<2; i++){
        *(tablica+i) = malloc(2*sizeof(int));
    }

    int **tablica2 = malloc(2*sizeof(int*));
    for(int i=0; i<2; i++){
        *(tablica2+i) = malloc(2*sizeof(int));
    }

    **tablica = 4;
    *(*(tablica+0)+1) = 3;
    *(*(tablica+1)+0) = 1;
    *(*(tablica+1)+1) = 5;

    **tablica2 = 9;
    *(*(tablica2+0)+1) = 8;
    *(*(tablica2+1)+0) = 7;
    *(*(tablica2+1)+1) = 6;

    solve(tablica, tablica2, 2, 2);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d %d = %d\n", i, j, tablica[i][j]);
        }
    }

    printf("///////////////\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d %d = %d\n", i, j, tablica2[i][j]);
        }
    }
}
