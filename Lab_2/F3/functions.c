//
// Created by Boti on 2021. 02. 24..
//

#include "functions.h"
int tombosszeg(int tomb[], int n)
{
    int sum=0;
    int i;
    for(i=0; i<n; i++)
    {
        sum=sum+tomb[i];
    }
    return sum;
}
int tombatlag(int tomb[], int n)
{
    int sum=0;
    int i;

    for(i=0; i<n; i++)
    {
        sum=sum+tomb[i];
    }

    return sum/n;
}