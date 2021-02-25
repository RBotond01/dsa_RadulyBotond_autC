#include <stdio.h>
#include "functions.h"
int main() {
    int s;
    printf("Adja meg az ejfel ota eltelt idot masodpercben:");
    scanf("%i",&s);
    hanyora(s);
    int sec;
    int h;
    int min;
    printf("\nIrja be hany ora:");
    scanf("%i", &h);
    printf("Irja be hany perc:");
    scanf("%i", &min);
    printf("Irja be hany masodperc:");
    scanf("%i", &sec);
    elteltido(h, min, sec);
    return 0;
}
