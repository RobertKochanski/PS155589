#include <stdio.h>
#include <stdlib.h>

char *solve(int godz, int min, int sek){
    char *zegar = malloc(9*sizeof(char));
    sprintf(zegar, "%02d:%02d:%02d", godz, min, sek);
    return zegar;
}

wchar_t *solve2(int godz, int min, int sek){
    wchar_t *zegar = malloc(9*sizeof(wchar_t));
    swprintf(zegar, L"%02d:%02d:%02d", godz, min, sek);
    return zegar;
}

int main()
{
    char *x = solve(4,5,6);
    wchar_t *y = solve2(3,4,5);
    printf("%s\n", x);
    printf("%ls\n", y);

}
