#include "Stack.h"
#include "Queque.h"

#ifndef BURGER

#define BURGER 1

template <class T>
class Burger
{
private:
    Stack<T> *items;
    

public:
    Burger()
    {
        items = NULL;
        items = new Stack<T>();

    }

    processCell(Queue pQueue)
    {
        T*result = NULL;
        while (!items->isEmpty())
        {
            result = items.pop();
            pQueue->enqueue(result);
        }
    }



};

#endif