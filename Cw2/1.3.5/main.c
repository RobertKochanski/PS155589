#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, h, p, pole;
	int x;

	printf("1. pods+wysokosc\n");
	printf("2. 3 boki\n");
	printf("Wybierz forme liczenia: ");
	scanf("%i", &x);

	if(x==1)
	{
		printf("\nPodaj podstawe: ");
		scanf("%f", &a);

		printf("\nPodaj wysokosc: ");
		scanf("%f", &h);

		pole=(a*h)/2;

		printf("Pole trojkata wynosi: %f", pole);
	}
	else if(x==2)
	{
		printf("\nPodaj bok a: ");
		scanf("%f", &a);

		printf("\nPodaj bok b: ");
		scanf("%f", &b);

		printf("\nPodaj bok c: ");
		scanf("%f", &c);

		p=(a+b+c)/2;

		pole=sqrt(p*(p-a)*(p-b)*(p-c));

		printf("Pole trojkata wynosi: %f", pole);
	}
	else
	{
		printf("Zla wartosc!!");
	}
    return 0;
}
