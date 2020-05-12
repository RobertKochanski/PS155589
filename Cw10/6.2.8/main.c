#include <stdio.h>
#include <stdlib.h>

void solve(int tab[][100], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<100;j++){
            tab[i][j] = 0;
        }
    }
}

int main()
{
    int tablica[2][100];

    for(int i=0;i<2;i++){
        for(int j=0;j<100;j++){
            tablica[i][j] = 1;
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<100;j++){
            printf("%02d %02d = %d\n", i, j, tablica[i][j]);
        }
    }

    solve(tablica, 2);

    for(int i=0;i<2;i++){
        for(int j=0;j<100;j++){
            printf("%02d %02d = %d\n", i, j, tablica[i][j]);
        }
    }
    return 0;
}
