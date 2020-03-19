#include <stdio.h>
#include <stdlib.h>

int *foo(unsigned int n){
	return malloc(n*sizeof(int));
}

int main(int argc, char *argv[]) {
	
	printf("%p", foo(5));
	
	return 0;
}
