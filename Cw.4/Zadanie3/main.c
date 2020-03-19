#include <stdio.h>
#include <stdlib.h>

void foo(int *a, int *b){
	int aa = *a;
	*a = *b;
	*b = aa;
}

int main() {
	
	int a=20, b=15;
	foo(&a, &b);
	printf("A= %i, B= %i", a, b);
	
	
	return 0;
}
