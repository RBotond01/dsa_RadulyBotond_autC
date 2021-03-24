//
// Created by Boti on 2021. 03. 24..
//
#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

QUEUE *create(int capacity) {
    QUEUE *myQueue = (QUEUE *) malloc(sizeof(QUEUE *));
    myQueue->maxsize = capacity;
    myQueue->front = -1;
    myQueue->rear =-1;
    myQueue->items = (int *) malloc(myQueue->maxsize * sizeof(int));
    return myQueue;
}

int isEmpty(QUEUE *myQueue) {
    return myQueue->front==-1;
}

void put(QUEUE *myQueue, int a) {
    if(isEmpty(myQueue)){
        myQueue->front=myQueue->front+1;
    }
    myQueue->rear=myQueue->rear+1;
    myQueue->items[myQueue->rear]=a;
}

int get(QUEUE *myQueue) {
    int a=myQueue->items[myQueue->front];
    myQueue->front=myQueue->front+1;
    return a;

}
int front_element(QUEUE *myQueue){
    int a=myQueue->items[myQueue->front];
    return a;
}

int isFull(QUEUE *myQueue) {
    return myQueue->rear==myQueue->maxsize-1;
}