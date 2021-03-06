#include "minStack.h"
#include <vector>
#include <iostream>
#include <exception>
#include <cstdlib>

using namespace std;

class stackEmptyException : public exception
{
  public:
    const char *what()
    {
        return "The stack is empty";
    }
} emptyException;

template <class T>
minStack<T>::minStack()
{
    this->size = 0;
}

template <class T>
void minStack<T>::push(T elem)
{
    if (!this->empty())
    {
        if (min > elem)
            min_stack.push_back(elem);
        else
            min_stack.push_back(min);
    }
    else
        min_stack.push_back(elem);
    stack.push_back(elem);
    size++;
}

template <class T>
T minStack<T>::pop()
{
    if (this->empty())
        throw emptyException;
    T peek = stack.back();
    min_stack.pop_back();
    stack.pop_back();
    size--;
    return peek;
}

template <class T>
T minStack<T>::peek()
{
    if (this->empty())
        throw emptyException;
    return stack.back();
}

template <class T>
T minStack<T>::getMin()
{
    if (this->empty())
        throw emptyException;
    return min_stack.back();
}

template <class T>
bool minStack<T>::empty()
{
    return size == 0 ? true : false;
}