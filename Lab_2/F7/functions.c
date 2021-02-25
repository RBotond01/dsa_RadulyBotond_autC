//
// Created by Boti on 2021. 02. 25..
//

#include "functions.h"

int rendezes(int tomb[], int akp,int n)
{
    int s;
    int i;
    for(i=akp+1; i<n; i++)
    {
        if(tomb[i]<tomb[akp])
        {
            s=tomb[akp];
            tomb[akp]=tomb[i];
            tomb[i]=s;
        }
    }
    return tomb[akp];
}

int bin_ker(int tomb[], int als, int fels, int ker )
{
    if(fels >= als)
    {
        int mid=(als+fels)/2;
        if(tomb[mid]==ker)
        {
            return mid;
        }
        if(tomb[mid]>ker)
        {
            return bin_ker(tomb, als, (mid-1), ker);
        }
        if(tomb[mid]<ker)
        {
            return bin_ker(tomb, (mid+1), fels, ker);
        }
    }
    else
    {
        return -1;
    }
}