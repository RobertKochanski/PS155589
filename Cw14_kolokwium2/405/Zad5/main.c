#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct element{
    int x;
    struct element *next;
};

float srednia(struct element *l1){
    float suma=0;
    int ilosc=0;
    struct element *wsk = l1->next;
    while(wsk!=NULL){
        suma += wsk->x;
        ilosc++;
        wsk=wsk->next;
    }
    return suma/ilosc;
}

int solve(struct element *l1, struct element *l2){
    if(fabs(srednia(l1) - srednia(l2)) < 0.000001){
        return 1;
    }
    return 0;
}

int main()
{
    struct element *lista1 = malloc(sizeof(struct element));
    lista1->next = malloc(sizeof(struct element));
    lista1->next->x = 6;
    lista1->next->next = malloc(sizeof(struct element));
    lista1->next->next->x = 3;
    lista1->next->next->next = malloc(sizeof(struct element));
    lista1->next->next->next->x = 1;
    lista1->next->next->next->next = NULL;

    struct element *lista2 = malloc(sizeof(struct element));
    lista2->next = malloc(sizeof(struct element));
    lista2->next->x = 5;
    lista2->next->next = malloc(sizeof(struct element));
    lista2->next->next->x = 3;
    lista2->next->next->next = malloc(sizeof(struct element));
    lista2->next->next->next->x = 2;
    lista2->next->next->next->next = NULL;

    printf("%d", solve(lista1, lista2));
    return 0;
}
