#include <stdio.h>
int ketszamosszeg(int a, int b);
int main() {
    int a;
    int b;
    int c;
    scanf("%i", &a);
    scanf("%i", &b);
    c=ketszamosszeg(a , b);
    printf("A ket szam osszege: %i", c);
    return 0;
}
int ketszamosszeg(int a, int b){
    int c;
    c=a+b;
    return c;
}