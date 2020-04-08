#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, nsilnia = 1;
    scanf("%i", &n);
    for(int i=1;i<=n;i++){
        nsilnia*=i;
    }
    printf("%i", nsilnia);
    return 0;
}
