#include <stdio.h>
#include <stdlib.h>

char solve(char *x){
    int t=0;
    while(x[t]!=0){
        if(x[t]>=97 && x[t]<=122){
            return x[t];
        }
        t++;
    }
    return 0;
}

int main()
{
    char *x = "DRUKWAnELiTERY";
    char wynik = solve(x);
    printf("%c", wynik);
    return 0;
}
