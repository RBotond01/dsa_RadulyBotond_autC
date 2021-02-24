//
// Created by Boti on 2021. 02. 24..
//

#include "functions.h"

int maximum(int a, int b, int c)
{
    int max;
    if ((a>=b)&&(a>=c))
    {
        max=a;
    }
    if ((b>=a)&&(b>=c))
    {
        max=b;
    }
    if ((c>=b)&&(c>=a))
    {
        max=c;
    }
    return max;
}
int minimum(int a, int b, int c)
{
    int min;
    if ((a <= b) && (a <= c)) {
        min = a;
    }
    if ((b <= a) && (b <= c)) {
        min = b;
    }
    if ((c <= b) && (c <= a)) {
        min = c;
    }
    return min;
}