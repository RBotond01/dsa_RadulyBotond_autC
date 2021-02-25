//
// Created by Boti on 2021. 02. 26..
//

#include "functions.h"
#include <stdio.h>
#include <math.h>

int ket_pont_tav(int x1, int y1, int x2, int y2)
{
    int tav;
    tav= sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return tav;
}