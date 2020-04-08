#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%i", &n);
    if(n<0){
        n=-n;
    }
    printf("%i", n);
    return 0;
}
