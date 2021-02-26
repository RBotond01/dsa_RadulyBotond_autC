#include <stdio.h>

int main() {
    printf("A tomb elemeinek szama:\n");
    int n;
    scanf("%i",&n);
    int lepesszam=0;
    for( int i = 0; i < n; i++ )
    {
        printf("\n%i",i);
        for( int j = 1; j < n; j *= 2 )
        {
            printf("\n %i\n",j);
            for( int k = 0; k < j; k++ )
            {
              printf("  %i",k);
                lepesszam++;
            }
        }
    }
    //Az elso ciklus komplexitasa: n
    //A masodik ciklus komplexitasa szinten(csak kettes alapu logaritmusokrol lesz szo): log(n)
    //A harmadik ciklus komplexitasa: (log(n))*4-1 ( mert kettesevel lepik a ciklus)
    //A fenti ciklusok komplexitasa: n*(log(n))*((log(n))*4-1)
    printf("\n A program lepeseinek szama: %i ", lepesszam);
    return 0;
}
