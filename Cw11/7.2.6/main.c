#include <stdio.h>
#include <stdlib.h>

struct punktn{
    int n;
    float *tab;
};

void wypiszStrukture(struct punktn p){
    for(int i=0; i<p.n; i++){
        printf("%f ", p.tab[i]);
    }
    printf("\n");
}

void wypiszTabeleStruktur(struct punktn tablica[], int rozmiar){
    for(int i=0; i<rozmiar; i++){
        wypiszStrukture(tablica[i]);
    }
    printf("Koniec tablicy.\n\n");
}

void przepisz(struct punktn tab1[], struct punktn tab2[], int rozmiar){
    for(int i=0; i<rozmiar; i++){
        tab2[i].n = tab1[i].n;
        tab2[i].tab = malloc(tab1[i].n*sizeof(float));
        for(int j=0; j<tab1[i].n; j++){
            tab2[i].tab[j] = tab1[i].tab[j];
        }
    }
}

int main()
{
    struct punktn p1 = {.n = 3};
    p1.tab = malloc(3*sizeof(float));
    p1.tab[0] = 5.5;
    p1.tab[1] = 3;
    p1.tab[2] = 7;
    struct punktn p2 = {.n = 3};
    p2.tab = malloc(3*sizeof(float));
    p2.tab[0] = 7.4;
    p2.tab[1] = 5.3;
    p2.tab[2] = 9.5;
    struct punktn p3 = {.n = 2};
    p3.tab = malloc(2*sizeof(float));
    p3.tab[0] = 1;
    p3.tab[1] = 5;
    struct punktn tablicapkt[3] = {p1, p2, p3};
    struct punktn tablicapkt2[3] = {p1, p2, p1};
    wypiszTabeleStruktur(tablicapkt, 3);
    wypiszTabeleStruktur(tablicapkt2, 3);
    przepisz(tablicapkt, tablicapkt2, 3);
    printf("Po zmianie:\n");
    wypiszTabeleStruktur(tablicapkt, 3);
    wypiszTabeleStruktur(tablicapkt2, 3);
    return 0;
}
