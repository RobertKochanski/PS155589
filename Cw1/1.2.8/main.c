#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    scanf("%d%d%d", &x, &y, &z);
    printf("%f", (double)(x+y+z)/3);
    return 0;
}
