#include <stdio.h>
#include <stdlib.h>

void solve(char *napis){
    scanf("%s", napis);
}

void solve2(wchar_t *napis){
    wscanf(L"%ls", napis);
}


int main()
{
    char x[50];
    wchar_t y[50];
    solve(x);
    printf("%s\n", x);
    solve2(y);
    printf("%ls\n", y);
}
