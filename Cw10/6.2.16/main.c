#include <stdio.h>
#include <stdlib.h>

int solve(int **tab, int n, int m){
    float avg = 0;
    int wynik;
    for(int i=0; i<n; i++)
    {
        float suma = 0, dzielnik = 0, temp = 0;
        for(int j=0; j<m; j++)
        {
            suma += tab[i][j];
            dzielnik++;
        }
        temp = suma/dzielnik;
        if(temp > avg){
            avg = temp;
            wynik = i;
        };
    }
    return wynik;
}

int main()
{
    int **tablica = malloc(3*sizeof(int*));
    for(int i=0; i<3; i++){
        *(tablica+i) = malloc(3*sizeof(int));
    }
    **tablica = 4;
    *(*(tablica+0)+1) = 3;
    *(*(tablica+0)+2) = 2;
    *(*(tablica+1)+0) = 1;
    *(*(tablica+1)+1) = 5;
    *(*(tablica+1)+2) = 2;
    *(*(tablica+2)+0) = 8;
    *(*(tablica+2)+1) = 5;
    *(*(tablica+2)+2) = 6;
    printf("%d", solve(tablica, 3, 3));
    return 0;
    return 0;
}
