#include <stdio.h>

int main() {
    //feltoltem egy vermet 1-10 ig szamokkal, majd kiirjuk ezeket
    STACK *myStack=create(20);
    for(int i=1;i<=10;i++)
    {
        if(!isFull(myStack))
        {push(myStack,i);
        }
    }
    while(!isEmpty(myStack))
    {
        printf("%i ", pop(myStack));
    }

    return 0;
}
