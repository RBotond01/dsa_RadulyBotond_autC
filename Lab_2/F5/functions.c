//
// Created by Boti on 2021. 02. 25..
//
#include <stdio.h>
#include "functions.h"
void inverzkiir(int a[], int n)
{
    printf("Forditott kiiratas:\n");
    int i;
    for(i=1; i<=n; i++)
    {
        printf("%i\n" , a[n-i]);
    }
}