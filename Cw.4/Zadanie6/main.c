#include <stdio.h>
#include <stdlib.h>

void foo(int n, int *w){
	*w=n;
}

int main(int argc, char *argv[]) {

	int x=4,y=5;
	foo(x,&y);
	printf("%d %d", x,y);
	return 0;
}
