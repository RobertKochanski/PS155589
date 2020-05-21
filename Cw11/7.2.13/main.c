#include <stdio.h>
#include <stdlib.h>

struct trojkat{
    int a, h;
};

struct prostokat{
    int a, b;
};

struct rownoleglobok{
    int a, h;
};

struct trapez{
    int a, b, h;
};

union wymiary{
    struct trojkat troj;
    struct prostokat prost;
    struct rownoleglobok rown;
    struct trapez trap;
};

struct figura{
    union wymiary wym;
    int fig;
};

float pole(struct figura f){
    switch(f.fig){
        case 0: return (f.wym.troj.a*f.wym.troj.h)/2;
        break;
        case 1: return (f.wym.prost.a*f.wym.prost.b);
        break;
        case 2: return (f.wym.rown.a*f.wym.rown.h);
        break;
        case 3: return ((f.wym.trap.a+f.wym.trap.b)*f.wym.trap.h)/2;
        break;
        default: return -1;
    }
}

int main()
{
    struct figura f;
    f.wym.troj.a = 5;
    f.wym.troj.h = 2;
    f.fig = 0;
    printf("%f\n", pole(f));

    // Sprawdzenie wartosci default w switch
    f.wym.rown.a = 7;
    f.wym.rown.h = 2;
    f.fig = 7;
    printf("%f\n", pole(f));

    f.wym.trap.a = 5;
    f.wym.trap.b = 7;
    f.wym.trap.h = 4;
    f.fig = 3;
    printf("%f\n", pole(f));
    return 0;
}
