#include <stdio.h>
#include "function.h"
int main() {
    int a;
    int b;
    scanf("%i",&a);
    scanf("%i",&b);
    printf("A ket szam osszege: %i\n", sum(a,b));
    return 0;
}
