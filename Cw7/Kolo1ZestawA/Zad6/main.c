#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ile=0;
    int tab[7] = {7,14,5,77,4,8,9};
    for(int i=0;i<7;i++){
        if(tab[i]%7==0)
            ile++;
    }
    printf("%d", ile);
}
