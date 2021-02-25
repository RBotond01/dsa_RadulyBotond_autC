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
    printf("Melyik a keresett elem?\n");
    scanf("%i",&ker_elem);
    for (i = 0; i < n; i++)
    {
        a[i] = (rand() % (felsoh - alsoh + 1)) + alsoh;
    }
    int kerindex;
    kerindex=lin_ker(a, n, ker_elem);
    if(kerindex >= 0)
    {
        printf("A keresett elem pozicioja a szamsorozatban: %i", kerindex);
    }
    else
    {
        printf("A keresett elem nem talalhato a szamsorozatban");
    }

        return 0;
}