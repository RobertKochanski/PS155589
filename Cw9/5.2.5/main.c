#include <stdio.h>
#include <stdlib.h>

void przepisz1(char *napis, char *kopia){
    int i;
    for(i = 0; napis[i] != 0; i++){
        kopia[i] = napis[i];
    }
    kopia[i] = 0;
}

void przepisz2(wchar_t *napis, wchar_t *kopia){
    int i;
    for(i = 0; napis[i] != 0; i++){
        kopia[i] = napis[i];
    }
    kopia[i] = 0;
}

int main()
{
    char x[] = "abcd";
    char kopia[20] = "";
    printf("%s /////// %s\n", x, kopia);
    przepisz1(x, kopia);
    printf("%s /////// %s\n", x, kopia);

    wchar_t x2[] = L"dcba";
    wchar_t kopia2[20] = L"";
    wprintf(L"%s /////// %s\n", x2, kopia2);
    przepisz2(x2, kopia2);
    wprintf(L"%s /////// %s\n", x2, kopia2);
}
