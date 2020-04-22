#include <stdio.h>
#include <stdlib.h>
#define rozmiar 5

int foo(int tab1[], int tab2[]){
    for(int i=0; i<rozmiar; i++){
        if(tab1[i]!=tab2[i]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int tab1[rozmiar] = {3,5,6,7,8};
    int tab2[rozmiar] = {2,5,6,7,8};
    printf("%d\n", foo(tab1, tab2));

    int tab3[rozmiar] = {1,1,1,1,1};
    int tab4[rozmiar] = {1,1,1,1,1};
    printf("%d", foo(tab3, tab4));
}
