#include <stdio.h>
#include <stdlib.h>

void wytnijzwA(char *napis, char *napis2){
    int a = 0;
    for(int i=0; napis[i]!=0; i++){
        int temp = 0;
        for(int j = 0; napis2[j]!=0; j++){
            if(napis[i] == napis2[j]){
                temp = 1;
            }
        }
        if(temp == 0){
            napis[a] = napis[i];
            a++;
        }
    }
    napis[a] = 0;
}

void wytnijzwB(wchar_t *napis, wchar_t *napis2){
    int a = 0;
    for(int i=0; napis[i]!=0; i++){
        int temp = 0;
        for(int j = 0; napis2[j]!=0; j++){
            if(napis[i] == napis2[j]){
                temp = 1;
            }
        }
        if(temp == 0){
            napis[a] = napis[i];
            a++;
        }
    }
    napis[a] = 0;
}

int main()
{
    char x[] = "Ala";
    char y[] = "a";
    printf("%s ///////// %s\n", x, y);
    wytnijzwA(x, y);
    printf("%s", x);

    printf("\n\n");

    wchar_t a[] = L"napis";
    wchar_t b[] = L"string";
    wprintf(L"%s ///////// %s\n", a, b);
    wytnijzwB(a, b);
    wprintf(L"%s", a);
}
