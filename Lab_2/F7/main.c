#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
int main()
{
    int n;
    printf("Hany elemu legyen a szamsorozat?\n");
    scanf("%i", &n);
    int a[n];
    int alsoh=0;
    int felsoh=100;
    int i;
    int ker_elem;
    int poz_ker_elem;
    printf("Melyik a keresett elem?\n");
    scanf("%i",&ker_elem);
    for (i = 0; i < n; i++)
    {
        a[i] = (rand() % (felsoh - alsoh + 1)) + alsoh;
    }
    for (i = 0; i < n; i++)
    {
        a[i]=rendezes(a, i, n);
    }

    poz_ker_elem = bin_ker(a, 0, n-1, ker_elem);
    if(poz_ker_elem > -1)
    {
        printf("A keresett elem pozicioja: %i",poz_ker_elem);
    }
    else
    {
        printf("A keresett elem nem talalhato");
    }

    return 0;
}
