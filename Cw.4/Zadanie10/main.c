#include <stdio.h>
#include <stdlib.h>

double* foo(){
	return malloc(sizeof(double));
}

int main() {
	
	double a=5;
	printf("a= %d\n", foo(a));
	printf("a= %p\n", foo(a));
	return 0;
}
