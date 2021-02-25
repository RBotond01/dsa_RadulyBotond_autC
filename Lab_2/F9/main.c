#include <stdio.h>
#include "functions.h"
#include <math.h>

int main() {
    int xa;
    int ya;
    int xb;
    int yb;
    printf("Irja be az A pont x koordinatajat:");
    scanf("%i",&xa);
    printf("Irja be az A pont y koordinatajat:");
    scanf("%i",&ya);
    printf("Irja be a B pont x koordinatajat:");
    scanf("%i",&xb);
    printf("Irja be a B pont y koordinatajat:");
    scanf("%i",&yb);
    printf("A ket pont kozti tavolsag: %d", ket_pont_tav(xa,ya,xb,yb));
    return 0;
}
