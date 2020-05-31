#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct planeta{
    int numer;
    char nazwa[50];
    float promien;
};

float obj(struct planeta x){
    float pi = 3.14;
    float wynik = (4*(pi*(x.promien*x.promien*x.promien)))/3;
    return wynik;
}

struct planeta solve(struct planeta tab[], int n){
    float ob = obj(tab[0]);
    struct planeta wynik = tab[0];
    for(int i=1; i<n; i++){
        float ob_temp = obj(tab[i]);
        if(ob < ob_temp){
            ob = ob_temp;
            wynik = tab[i];
        }
    }
    return wynik;
};

int main()
{
    struct planeta x;
    x.numer = 1;
    //*x.nazwa = 'Planeta 1'
    strcpy(x.nazwa, "Nazwa 1");
    x.promien = 5.1;
    struct planeta y;
    y.numer = 2;
    strcpy(y.nazwa, "Nazwa 2");
    y.promien = 6;
    struct planeta z;
    z.numer = 3;
    strcpy(z.nazwa, "Nazwa 3");
    z.promien = 2.4;

    struct planeta tablica[3] = {x, y, z};
    struct planeta wynik = solve(tablica, 3);
    printf("Najwieksza objectosc ma: Nr.%i / %s / %f\n", wynik.numer, wynik.nazwa, wynik.promien);

    return 0;
}
