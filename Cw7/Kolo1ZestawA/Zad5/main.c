#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m){
    if(m==0) return 2;
    if(n==0) return m;
    return foo(n-1, m) * foo(n, m-1) +7;
}

int main()
{
    printf("%d\n", foo(0, 4));
    printf("%d\n", foo(2, 0));
    printf("%d\n", foo(3, 2));
}
