//
// Created by Boti on 2021. 03. 24..
//

#ifndef QUEUE_FUNCTIONS_H
#define QUEUE_FUNCTIONS_H
typedef struct
{
    int maxsize;// a verem maximális kapacitása
    int front;
    int rear;
    int *items;
} QUEUE;
QUEUE *create (int capacity);
int isEmpty (QUEUE *myQueue);
int isFull (QUEUE *myQueue);
void put (QUEUE *myQueue, int a);
int get (QUEUE *myQueue);
int front_element(QUEUE *myQueue);
#endif //QUEUE_FUNCTIONS_H
