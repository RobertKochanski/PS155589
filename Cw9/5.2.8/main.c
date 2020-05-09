#include <stdio.h>
#include <stdlib.h>

void solve(char *napis){
    int i;
    for(i = 0; napis[i] != 0; i++){
        if(napis[i] >= 'a' && napis[i]<= 'z'){
            napis[i] -= 32;
        }
    }
    napis[i] = 0;
}

int main()
{
    char x[] = "Dowolny napis do zmiany";
    printf("%s\n", x);
    solve(x);
    printf("%s", x);
}
