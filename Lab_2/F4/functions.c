//
// Created by Boti on 2021. 02. 24..
//

#include "functions.h"

int parosszamlalo(int tomb[], int n)
{
    int szamlalo=0;
    int i;
    for(i=0; i<n; i++)
    {
        if(tomb[i]%2==0)
        {
            szamlalo++;
        }
    }
    return szamlalo;
}
int paratlanszamlalo(int tomb[], int n)
{
    int szamlalo=0;
    int i;
    for(i=0; i<n; i++)
    {
        if((tomb[i]+1)%2==0)
        {
            szamlalo++;
        }
    }
    return szamlalo;
}
int pozszamlalo(int tomb[], int n)
{
    int szamlalo=0;
    int i;
    for(i=0; i<n; i++)
    {
        if(tomb[i]>0)
        {
            szamlalo++;
        }
    }
    return szamlalo;
}
int negszamlalo(int tomb[], int n)
{
    int szamlalo=0;
    int i;
    for(i=0; i<n; i++)
    {
        if(tomb[i]<0)
        {
            szamlalo++;
        }
    }
    return szamlalo;
}