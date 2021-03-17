//
// Created by Boti on 2021. 03. 17..
//

#ifndef STACK_1_FUNCTIONS_H
#define STACK_1_FUNCTIONS_H
typedef struct
{
    int maxsize;// a verem maximális kapacitása
    int sp;
    int *items;
} STACK;
STACK *create (int capacity);
int isEmpty (STACK *myStack);
int isFull (STACK *myStack);
void push (STACK *myStack, int a);
int pop (STACK *myStack);
int top (STACK *myStack);
#endif //STACK_1_FUNCTIONS_H
