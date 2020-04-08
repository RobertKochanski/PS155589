#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    scanf("%f", &x);
    if(x<0){
        x=-x;
    }
    printf("%f", x);
    return 0;
}
