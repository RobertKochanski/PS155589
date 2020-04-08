#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int temp=n;

    for(int i=0; i<m; i++){
        printf("%d\n", n);
        n+=temp;
    }
    return 0;
}
