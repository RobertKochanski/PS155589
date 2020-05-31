#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int solve(float **tab, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((j==0 || j==m-1) || (i==0 || i==n-1)){
                if(fabs(tab[i][j]) < 0.0000001){
                    return 0;
                }
            }
        }
	}
    return 1;
}

int main()
{
    float **tablica = malloc(3*sizeof(int*));
    for(int i=0; i<3; i++){
        *(tablica+i) = malloc(3*sizeof(int));
    }
    **tablica = 1;
    *(*(tablica)+1) = 3.3;
    *(*(tablica)+2) = 2;
    *(*(tablica+1)) = 4;
    *(*(tablica+1)+1) = 0.2;
    *(*(tablica+1)+2) = 8;
    *(*(tablica+2)) = 3;
    *(*(tablica+2)+1) = 0.8;
    *(*(tablica+2)+2) = 1;

// 1.0 3.3 2.0
// 4.0 0.2 8.0
// 3.0 0.8 1.0

    printf("%d", solve(tablica, 3, 3));
    return 0;
}
