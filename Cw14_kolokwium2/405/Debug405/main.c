#include <stdio.h>
#include <stdlib.h>

int main()
{
    char wyraz[]="telewizjaRadio";
    char * w= wyraz;  // w=0x60fee8   , * w='t'
    int q = sizeof(char); // q=1
    w = wyraz+5; // w=0x60feed   , * w='i'
    char t = *wyraz+2; //t='v'    , &t=0x60fef7
    t = *(wyraz+2);   //t='l'    , &t=0x60fef7
    *w=(wyraz+7)[-3]; // w=0x60feed    , *w='w'
    w =&(*(wyraz+3))-1; // w=0x60feea   , * w='l'
    return 0;
}
