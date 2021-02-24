#include <stdio.h>
#include "functions.h"
int main() {
   int a;
   int b;
   int c;
   int max;
   int min;
   scanf("%i", &a);
   scanf("%i", &b);
   scanf("%i", &c);
   max=maximum(a,b,c);
   min=minimum(a,b,c);
   printf("A harom szam kozul a legkissebb: %i\nA harom szam kozul a legnagyobb: %i", min, max);
    return 0;
}
