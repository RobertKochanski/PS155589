#include <stdio.h>
#include <stdlib.h>

struct trojkat{
    int a, b, c;
};

void solve(struct trojkat troj1, struct trojkat *troj2){
    *troj2 = troj1;
}

int main()
{
    struct trojkat x;
    struct trojkat y;
    x.a = 5;
    x.b = 4;
    x.c = 6;
    solve(x, &y);
    printf("%d %d %d", y.a, y.b, y.c);
    return 0;
}
