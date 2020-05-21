#include <stdio.h>
#include <stdlib.h>

enum polaczenie {nie_polaczono = -1, laczenie = 0, polaczono =1};

struct komputer{
    enum polaczenie p;
    char *ip;
    char *nazwa;
};

void solve(struct komputer k){
    printf("Stan lacza: %d \nIP komputera: %s \nNazwa komputera: %s\n", k.p, k.ip, k.nazwa);
}

int main()
{
    printf("-1 - nie polaczono       0 - w trakcie laczenia       1 - polaczono\n\n");
    struct komputer komp;
    komp.p = polaczono;
    komp.ip = "192.168.0.83";
    komp.nazwa = "Wlasciciel";
    solve(komp);
    return 0;
}
