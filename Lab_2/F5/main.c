#include <stdio.h>
#include "functions.h"
int main() {
    int n;
    scanf("%i", &n);
    int a[n];
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%i", &a[i]);
    }
    inverzkiir(a,n);
    return 0;
}
