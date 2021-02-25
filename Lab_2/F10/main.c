#include <stdio.h>
#include "functions.h"


int main() {
    printf("A standard masodfoku egyenlet alakja: ax2+bx+c=0\n");
    float a;
    float b;
    float c;
    printf("Irja be az a egyuthatot:");
    scanf("%f",&a);
    printf("Irja be a b egyuthatot:"); // 44 percet gondolkoztam hogy mi lehet a baja a programnak amire rajottem hogy
    scanf("%f",&b);                    // a b-t es a c-t egy hanyagsag miatt az avaltozoba kertem be.
    printf("Irja be a c egyuthatot:");
    scanf("%f",&c);
    masodfoku(a,b,c);
    return 0;
}
