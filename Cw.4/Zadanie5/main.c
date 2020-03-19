#include <stdio.h>
#include <stdlib.h>

int foo(const int *a, const int *b){
	return *a+*b;
}

int main(int argc, char *argv[]) {
	int x=5,y=7;
	printf("Suma: %i", foo(&x,&y));
	
	return 0;
}
