//
// Created by Boti on 2021. 02. 25..
//

#include "functions.h"

int lin_ker(int tomb[], int elemszam, int keresett )
{
    int i;
    for(i=0; i<elemszam; i++)
    {
        if(tomb[i]==keresett)
        {
            return i;
        }
    }

    return -1;
}