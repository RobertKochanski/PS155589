#include <stdio.h>
#include <stdlib.h>

double* foo(){
	return malloc(sizeof(double));
}

int main(int argc, char *argv[]) {
	
	double a=5;
	printf("a= %d\n", foo(a));
	printf("a= %p\n", foo(a));
	return 0;
}
