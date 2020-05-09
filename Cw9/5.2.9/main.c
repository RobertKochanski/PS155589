#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *napis){
    for(int i = 0;; i++){
        if(napis[i]==0){
            return i;
        }
    }
}

void wytnij(char *napis, int n, int m){
    if(m<dlugosc(napis)){
        for(int i=m+1;i<dlugosc(napis);i++){
            napis[i-(m-n+1)] = napis[i];
        }
        napis[dlugosc(napis)-(m-n+1)] = 0;
    }
    else if(m>=dlugosc(napis)){
        napis[n] = 0;
    }
}

int main()
{
    char x[] = "abcdef";
    wytnij(x, 2, 3);
    printf("%s", x);
}
