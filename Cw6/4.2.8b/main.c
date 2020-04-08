#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 5

void foo(int n, double tab1[n], double tab2[n], double tab3[n*2]){
    for(int i=0;i<n;i++){
        tab3[2*i+1] = tab1[i];
        tab3[2*i] = tab2[i];
    }
    for(int i=0;i<n*2;i++){
        printf("%f ", tab3[i]);
    }
}

int main()
{
    double tablica1[ROZMIAR] = {3.3, 5.5, 8.8, 5.5, 9.9};
    double tablica2[ROZMIAR] = {8.8, 4.4, 2.2, 7.7, 1.1};
    double tablica3[ROZMIAR] = {};

    foo(ROZMIAR, tablica1, tablica2, tablica3);

    return 0;
}
