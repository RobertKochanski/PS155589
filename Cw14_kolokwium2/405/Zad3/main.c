#include <stdio.h>
#include <stdlib.h>

int solve(int **tab, int n, int m){
    int suma=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                suma += (*(*(tab+i)+j)) * (*(*(tab+i)+j));
            }
        }
    }
    return suma;
}

int main()
{
    int **tablica = malloc(3*sizeof(int*));
    for(int i=0; i<3; i++){
        *(tablica+i) = malloc(3*sizeof(int));
    }

    **tablica = 2;
    *(*(tablica)+1) = 0;
    *(*(tablica)+2) = 0;
    *(*(tablica+1)) = 0;
    *(*(tablica+1)+1) = 3;
    *(*(tablica+1)+2) = 0;
    *(*(tablica+2)) = 0;
    *(*(tablica+2)+1) = 0;
    *(*(tablica+2)+2) = 6;

    //2 0 0
    //0 3 0
    //0 0 6

    printf("%d", solve(tablica, 3, 3));

    return 0;
}
