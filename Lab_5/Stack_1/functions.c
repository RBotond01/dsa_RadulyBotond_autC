//
// Created by Boti on 2021. 03. 17..
//

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

STACK *create(int capacity) {
    STACK *myStack = (STACK *) malloc(sizeof(STACK *));
    //ellenorzes
    myStack->maxsize = capacity;
    myStack->sp = -1;
    myStack->items = (int *) malloc(myStack->maxsize * sizeof(int));
    //ellenorzes
    return myStack;
}

int isEmpty(STACK *myStack) {
    return myStack->sp==-1;
}

void push(STACK *myStack, int a) {
    myStack->sp=myStack->sp+1;
    myStack->items[myStack->sp]=a;
}

int pop(STACK *myStack) {
    int a=myStack->items[myStack->sp];
    myStack->sp=myStack->sp-1;
    return a;

}

int isFull(STACK *myStack) {
    return myStack->sp==myStack->maxsize-1;
}
