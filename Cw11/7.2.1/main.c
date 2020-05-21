#include <stdio.h>
#include <stdlib.h>

struct trojkat{
    float a, b, c;
};

float solve(struct trojkat x){
    return x.a + x.b + x.c;
}

int main()
{
    struct trojkat x;
    x.a = 5.5;
    x.b = 4;
    x.c = 6;
    printf("%f", solve(x));
    return 0;
}
