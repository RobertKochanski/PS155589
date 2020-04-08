#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
	int x;

	printf("1. dodawanie\n");
	printf("2. odejmowanie\n");
	printf("3. mnozenie\n");
	printf("4. dzielenie\n");
	scanf("%i", &x);

    if(x>4){
        printf("Zla wartosc!!");
        return 0;
    }

	printf("Podaj 2 liczby: ");
	scanf("%f%f",&a ,&b);

	switch(x){
		case 1: printf("wynik dodawania: %f", a+b); break;
		case 2: printf("wynik odejmowania: %f", a-b); break;
		case 3: printf("wynik mnozenia: %f", a*b); break;
		case 4:
			if(b!=0)
			{
				printf("wynik dzielenia: %f", a/b);
				break;
			}
			else
			{
				printf("Nie dzielimy przez zero!!!");
				break;
			}
	}
    return 0;
}
