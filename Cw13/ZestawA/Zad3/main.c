#include <stdio.h>
#include <stdlib.h>

struct element {
    char x;
    struct element * next;
};

int dlugosc(struct element *lista){
    int ilosc = 1;
    while(lista!=NULL){
        ilosc++;
        lista=lista->next;
    }
    return ilosc;
}

int solve(struct element *l1, struct element *l2){
    struct element *wsk1 = l1->next;
    struct element *wsk2 = l2->next;
    if(dlugosc(wsk1)==dlugosc(wsk2)){
        while(wsk1!=NULL){
            if(wsk1->x!=wsk2->x){
                return 0;
            }
            wsk2=wsk2->next;
            wsk1=wsk1->next;
        }
    }
    else{
        return 0;
    }

    return 1;
}

int main()
{
    struct element *lista1 = malloc(sizeof(struct element));
    lista1->next = malloc(sizeof(struct element));
    lista1->next->x = 'a';
    lista1->next->next = malloc(sizeof(struct element));
    lista1->next->next->x = 'b';
    lista1->next->next->next = NULL;

    struct element *lista2 = malloc(sizeof(struct element));
    lista2->next = malloc(sizeof(struct element));
    lista2->next->x = 'a';
    lista2->next->next = malloc(sizeof(struct element));
    lista2->next->next->x = 'b';
    lista2->next->next->next = NULL;

    printf("%d", solve(lista1, lista2));
    return 0;
}
