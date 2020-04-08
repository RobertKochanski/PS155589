#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, pdelta, x1, x2;

	scanf("%f%f%f", &a, &b, &c);
	delta=pow(b,2)-(4*a*c);

	if(delta>0)
	{
		pdelta=sqrt(delta);
		x1=(-b-pdelta)/2*a;
		x2=(-b+pdelta)/2*a;
		printf("x1 wynosi %f a x2 wynosi %f", x1, x2);
	}
	else if(delta==0)
	{
		x1=(-b)/2*a;
		printf("x wynosi: %f", x1);
	}
	else
	{
		printf("Nie ma rozwiazan!");
	}
    return 0;
}
