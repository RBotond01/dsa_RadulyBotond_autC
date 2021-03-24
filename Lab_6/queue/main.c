#include <stdio.h>
#include "Functions.h"
int main() {
    QUEUE *myQueue=create(20);
    int sw=0;
    do{
        printf(" 1-Uj elem bevitele a sorba\n 2-Elem eltavolitasa a sorbol\n 3-A sorban levo legelso elem\n 4-kilepes\n Parancs:");
        scanf("%i", &sw);
        switch (sw) {
            case 1:
                printf("Ide irja az uj elemet: ");
                int uj;
                scanf("%i", &uj);
                if(!isFull(myQueue))
                {
                    put(myQueue,uj);
                }
                else
                {
                    printf("A sor tele van tobb elem hozzaadasa nem lehetseges\n");
                }
                break;
            case 2:
                if(!isEmpty(myQueue)){
                    printf("Az eltavolitott elem: %i \n", get(myQueue));
                }
                else{
                    printf("A sor ures. Nem lehetseges elemeket kiiratni\n");
                }
                break;
            case 3:
                if(!isEmpty(myQueue)){
                    printf("A sorban (aktualisan) a legelso elem: %i \n",front_element(myQueue));
                }
                else{
                    printf("A sor ures, ennek kovetkezteben nincs elso elem.\n");
                }
                break;
            case 4:
                break;
            default:
                printf("Az adott szamu parancs nem talalhato a parancsok kozott\n");
                break;
        }

    }while (sw!=4);
    printf("KILEPVE! A programfutas veget ert.");
    return 0;
}
