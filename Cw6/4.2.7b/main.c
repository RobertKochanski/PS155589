#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 5

void foo(int n, int tab1[n], int tab2[n], int tab3[n]){
    for(int i=0;i<n;i++){
        if(tab1[i]>tab2[i]){
            tab3[i]=tab1[i];
        }
        else{
            tab3[i]=tab2[i];
        }
        printf("%i ", tab3[i]);
    }
}

int main()
{
    int tablica1[ROZMIAR] = {3,5,8,5,9};
    int tablica2[ROZMIAR] = {8,44,2,7};
    int tablica3[ROZMIAR] = {};
    foo(ROZMIAR, tablica1, tablica2, tablica3);

}
