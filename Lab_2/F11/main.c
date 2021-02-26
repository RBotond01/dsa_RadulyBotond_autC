#include <stdio.h>

int main() {
    printf("A tomb elemeinek szama:\n");
    int n;
    scanf("%i",&n);
    int lepesszam=0;
    for( int i = n; i > 0; i /= 2 )
    {
        printf("\n%i",i);
        for( int j = 1; j < n; j *= 2 )
        {
            printf("\n %i\n",j);
            for( int k = 0; k < n; k += 2 )
            {
                printf("  %i",k);
               lepesszam++;
            }
        }
    }
    //Az elso ciklus komplexitasa (csak kettes alapu logaritmusokrol lesz szo): (log(n))+1 (Mert csak a ketto
    //hatvanyaira lepik ha a szam a kettes szam ket hatvanya koze esik akkor a logaritmusnak adott n szam alatt a
    // kissebbik hatvanyt ertjuk (pl. n=30 de a 16 nak a logaritmusat vesszuk)ez a jelenseg az int tipus miatt letezik)
    //A masodik ciklus komplexitasa szinten: (log(n))+1 ( mert csak a ketto hatvanyaira lepik)(itt az elozohoz hasonlo
    //problema nincs)
    //A harmadik ciklus komplexitasa:n/2 ( mert kettesevel lepik a ciklus)
    //A fenti ciklusok komplexitasa: (n/2)*((log(n))+1)*((log(n))+1) vagyis (n/2)*((log(n))+1)^2
    printf("\n A program lepeseinek szama: %i, ", lepesszam);
    return 0;
}
