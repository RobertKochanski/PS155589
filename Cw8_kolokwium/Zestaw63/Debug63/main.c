#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    if (*a>*b)
        return *b;
    return *a;
}

int main()
{
    int tab[] = {6,3,-3,2,9,8,1};
    int *wsk=tab-1;
    int b = *(wsk+=4); //b=2
    int c = b+2; // b=2  , c=4
    int d = foo(&b,&c); // b=2  , c=4  , d=2
    int e = (wsk+=-1)[3]; // b=2  , c=4  , d=2  , e=8
    e = (d *= 2) + (c /= 2); // b=2  , c=2  , d=4  , e=6
    c = d - (b+=8); // b=10  , c=-6  , d=4  , e=6
    b = *wsk + e; // b=3  , c=-6  , d=4  , e=6
    return 0;
}
