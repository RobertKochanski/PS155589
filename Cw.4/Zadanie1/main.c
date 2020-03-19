#include <stdio.h>
#include <stdlib.h>

int mniejsza(int *a, int *b){
	if(*a>*b){
		return *b;
	}
	return *a;
}

int main(int argc, char *argv[]) {

	int x=20,y=15;
	
	printf("Mniejsza wartosc to: %i", mniejsza(&x, &y));
	
	return 0;
}
