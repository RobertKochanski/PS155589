#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(char *x, char *y, char *z){
    strcat(z, y);
    strcat(y, x);
}

int main()
{
    char x[50] = "ala ma ";
    char y[50] = "kota ";
    char z[50] = "Toma ";
    printf("1.%s\n", x);
    printf("2.%s\n", y);
    printf("3.%s\n", z);
    solve(x, y, z);
    printf("---Po zmianie---\n");
    printf("1.%s\n", x);
    printf("2.%s\n", y);
    printf("3.%s\n", z);
    return 0;
}
