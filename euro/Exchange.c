//
// Created by Boti on 2021. 05. 18..
//

#include "Exchange.h"


Exchange* createExchange() {
    Exchange* exchange = (Exchange*)malloc(sizeof(Exchange));

    if(!exchange) {
        printf("Failed to allocate memory for Exchange.");
        return NULL;
    }

    exchange->year = 0;
    exchange->month = 0;

    exchange->forint = 0;
    exchange->penny = 0;

    return exchange;
}

bool compare(Exchange* ex1, Exchange* ex2) {
    if(ex1->forint > ex2->forint)
        return true;
    else if(ex1->forint <= ex2->forint)
        return false;

    if(ex1->penny > ex2->penny)
        return true;
    else if(ex1->penny <= ex2->penny)
        return false;

    return false;
}