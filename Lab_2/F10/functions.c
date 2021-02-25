//
// Created by Boti on 2021. 02. 26..
//

#include "functions.h"
#include <stdio.h>
#include <math.h>

void masodfoku(float a, float b, float c)
{
    //printf("%f, %f, %f\n",a,b,c);
    float delta;
    float gyok1;
    float gyok2;
    delta = (b*b)-(4*a*c);
    printf("delta: %f\n",delta);
    float gyokdelta= sqrt(delta);
    printf("gyokdelta: %f\n",gyokdelta);
    gyok1=(-b+gyokdelta)/(2*a);
    gyok2=(-b-gyokdelta)/(2*a);
    printf("A masodfoku egyenlet gyokei: %f, %f",gyok1,gyok2);
}