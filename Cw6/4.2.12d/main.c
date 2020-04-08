#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[]){
	int temp;
	for (int i = 0; i<n-1; i++){
		for (int j=0; j<n-1-i; j++){
			if (tab[j] < tab[j+1]){
				temp = tab[j+1];
				tab[j+1] = tab[j];
				tab[j] = temp;
			}
		}
    }
    for(int i=0; i<n; i++){
    printf("%d ", tab[i]);
    }
}

int main()
{
    int tablica[] = {1,4,8,6,4,7,9};
    foo(7, tablica);
    return 0;
}
