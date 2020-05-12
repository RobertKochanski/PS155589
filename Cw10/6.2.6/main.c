#include <stdio.h>
#include <stdlib.h>

int (*solve(int n, int m, int k))[]{
    return malloc(n*sizeof(int[m][k]));
}

void solve2(int n, int m, int k, int tab[][m][k]){
    free(tab);
}

int main()
{
    int *** tablica = solve(2,3,4);
    solve2(2, 3, 4, tablica);
}
