//
// Created by Boti on 2021. 05. 18..
//

#ifndef EURO_EXCHANGE_H
#define EURO_EXCHANGE_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int year;
    int month;

    int forint;
    int penny;
} Exchange;

Exchange* createExchange();

bool compare(Exchange* ex1, Exchange* ex2);
#endif //EURO_EXCHANGE_H
