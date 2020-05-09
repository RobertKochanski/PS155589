#include <stdio.h>
#include <stdlib.h>

int dlugosc1(char napis[]){
    int x = 0;
    while(napis[x] != 0){
        x++;
    }
    return x;
}

int dlugosc2(wchar_t napis[]){
    int x = 0;
    while(napis[x] != 0){
        x++;
    }
    return x;
}

int main()
{
    char a[] = "Jakis napis";
    wchar_t b[] = L"Jakis inny napis";
    printf("%d\n", dlugosc1(a));
    printf("%d", dlugosc2(b));
}
