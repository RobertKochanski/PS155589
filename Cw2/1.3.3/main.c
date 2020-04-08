#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
	scanf("%i%i%i", &a, &b, &c);
	if(a>=b && a>=c){
		printf("%i", a);
	}
	else if(b>=a && b>=c) {
		printf("%i", b);
	}
	else if(c>=a && c>=b){
		printf("%i", c);
	}
    return 0;
}
