#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[] = {2, -1, 5, 4, 5, 8, 7};
    int *wsk;
    wsk = tab + -3;
    int b = *(wsk+=4); //b=-1
    int c = b+2; // b=-1  , c=1
    int d = (b/=-8) ^ (c-=-17); // b=0  , c=18  , d=18
    int e = (wsk+=-1)[2]; // b=0  , c=18  , d=18  , e=5
    e = (d *= 8) + (c /= 3); // b=0  , c=6  , d=144  , e=150
    c = d + (b+=8); // b=8  , c=152  , d=144  , e=150
    b = *wsk + e; // b=152  , c=152  , d=144  , e=150
    d = b / c; // b=152  , c=152  , d=1  , e=150
    return 0;
}
