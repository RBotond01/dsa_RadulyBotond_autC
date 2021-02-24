#include <stdio.h>
#include "functions.h"
int main() {
    int n;
    scanf("%i", &n);
    int a[n];
    int i;
    for(i=0;i<n; i++)
    {
        scanf("%i", &a[i]);
    }
    printf("A tomb elemeinek osszege: %i\nA tomb elemeinek atlaga: %i",tombosszeg( a , n), tombatlag( a , n));
    return 0;
}
