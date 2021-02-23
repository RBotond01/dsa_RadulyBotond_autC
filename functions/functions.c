#include <stdio.h>
#include "functions.h"

int main() {
    int a;
    int b;
    int c;
    scanf("%i", &a);
    scanf("%i", &b);
    c=ketszamosszege(a,b);
    printf("%i", c);


    return 0;

}