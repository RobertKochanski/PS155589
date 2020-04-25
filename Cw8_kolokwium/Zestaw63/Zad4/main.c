#include <stdio.h>
#include <stdlib.h>

float foo2(float x){
    return x*x;
}

float foo(float(*foo2)(float), float x, float y){
    if((*foo2)(x)==(*foo2)(y)){
        return 2;
    }
    return -2;
}

int main()
{
    printf("%f\n", foo(foo2, 2, 3));
    printf("%f", foo(foo2, 4, 4));
}
