#include <stdio.h>
#include <stdlib.h>

int main()
{
    float suma=0;
    float dzielnik=0;
    float a=0;
    float srednia=0;
        for(int i=0;a>=0;i++){
            scanf("%f", &a);
            if(a>=0){
                suma += a;
                dzielnik++;
        }
    }
    srednia = suma/dzielnik;
    printf("%.2f", srednia);
}
