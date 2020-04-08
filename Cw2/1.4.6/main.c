#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, wynik = 1;
    scanf("%i", &n);

    if(n<=2){
        printf("Liczba ma byc wieksze od 2");
        return 0;
    }

    if(n%2==0){
        for(int i=2;i<=n;i=i+2){
            wynik*=i;
        }
        printf("%i", wynik);
    }
    else{
        for(int i=2;i<=n-1;i=i+2){
            wynik*=i;
        }
        printf("%i", wynik);
    }
    return 0;
}
