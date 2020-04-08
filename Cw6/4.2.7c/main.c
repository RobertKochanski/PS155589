#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 5

void foo(int n, int tab1[n], int tab2[n], int tab3[n]){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i] = tab1[i];
    }
    for(int i=0;i<n;i++){
        tab1[i] = tab2[i];
        printf("%i ", tab1[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        tab2[i] = tab3[i];
        printf("%i ", tab2[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        tab3[i] = temp[i];
        printf("%i ", tab3[i]);
    }
}

int main()
{
    int tablica1[ROZMIAR] = {3,5,8,5,9};
    int tablica2[ROZMIAR] = {8,4,2,7,1};
    int tablica3[ROZMIAR] = {1,2,3,4,5};

    foo(ROZMIAR, tablica1, tablica2, tablica3);
}
