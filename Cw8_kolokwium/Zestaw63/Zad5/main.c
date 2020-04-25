#include <stdio.h>
#include <stdlib.h>

int foo(int n){
    if(n>=2){
        return n + foo(n-2);
    }
    return 0;
}

int main()
{
    printf("%i", foo(44));
    return 0;
}
