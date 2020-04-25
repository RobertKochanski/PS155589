#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int tab1[], int tab2[]){
    int wynik = 0;
    for(int i=0; i<m; i++){
        if(tab1[i]%(n+1)==0){
            wynik++;
        }
        if(tab2[i]%(n+1)==0){
            wynik++;
        }
    }
    return wynik;
}

int main()
{
    int tab1[5] = {2,4,6,8,5};
    int tab2[5] = {1,4,6,3,9};

    printf("%d\n", foo(1, 5, tab1, tab2));
    printf("%d", foo(4, 5, tab1, tab2));
}
