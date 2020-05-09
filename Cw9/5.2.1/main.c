#include <stdio.h>
#include <stdlib.h>

void wyczysc1(char napis[]){
    napis[0] = 0;
}

void wyczysc2(wchar_t napis[]){
    napis[0] = 0;
}

int main()
{
    char napis1[] = "Jakis napis";
    wchar_t napis2[] = L"Inny napis";

    printf("%s\n", napis1);
    printf("%ls\n", napis2);
    wyczysc1(napis1);
    wyczysc2(napis2);
    printf("%s\n", napis1);
    printf("%ls", napis2);
}
