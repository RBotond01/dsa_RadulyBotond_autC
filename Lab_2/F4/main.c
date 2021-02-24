#include <stdio.h>
#include "functions.h"
int main() {
    int n;
    scanf("%i", &n);
    int t[n];
    for(int i=0; i<n; i++)
    {
        scanf("%i", &t[i]);
    }
    printf("A paros szamok szama: %i\nA paratlan szamok szama: %i\nA pozitiv szamok szama: %i\nA negativ szamok szama: %i", parosszamlalo(t,n),paratlanszamlalo(t,n),pozszamlalo(t,n),negszamlalo(t,n));
    return 0;
}
