#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct punkt{
    float x, y, z;
};

float solve(struct punkt tab[], int n){
    float temp;
    float min = sqrt(pow(tab[1].x-tab[0].x, 2) + pow(tab[1].y-tab[0].y, 2) + pow(tab[1].z-tab[0].z, 2));

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            temp = sqrt(pow(tab[j].x-tab[i].x, 2) + pow(tab[j].y-tab[i].y, 2) + pow(tab[j].z-tab[i].z, 2));
        }
        if(temp<min){
            min = temp;
        }
    }
    return min;
}


int main()
{
    struct punkt pkt1 = {.x = 3.2, .y = 7.9, .z = 2};
    struct punkt pkt2 = {.x = 1, .y = 2, .z = 3};
    struct punkt pkt3 = {.x = 6, .y = 4, .z = 2};
    struct punkt pkt4 = {.x = 7.7, .y = 2,8, .z = 5.2};
    struct punkt punkty[4] = {pkt1, pkt2, pkt3, pkt4};
    printf("%f", solve(punkty, 4));

    return 0;
}
