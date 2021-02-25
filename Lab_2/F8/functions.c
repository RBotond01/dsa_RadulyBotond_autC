//
// Created by Boti on 2021. 02. 25..
//
#include <stdio.h>
#include "functions.h"

void hanyora(int n)
{
    int h;
    int min;
    int s;
    if(n>86400)
    {
        n=n - 86400;
    }
    s=(n%3600)%60;
    min=(n%3600)/60;
    h=n/3600;
    printf("A beirt adatok alapjan a jelenlegi ido: %i:%i:%i",h,min,s);
}
void elteltido(int h, int min, int sec)
{
    int s;
    s=h*3600+min*60+sec;
    printf("Ejfel ota ennyi ido telt el: %i",s);
}