#include <stdio.h>
#include <stdlib.h>

struct lista{
    int x;
    struct lista *y;
};

int main()
{
    struct lista a;
    struct lista b;
    b.x = 1;
    b.y = &a;
    return 0;
}
