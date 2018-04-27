
#ifndef _MINSTACK_H_
#define _MINSTACK_H_
#include <vector>

template<class T>
class minStack{
    public:

        /*
        * The constructor of minStack 
        * This creates two vectors for a data storing stack and min storing stack
        * This object will have constant time on retrieving 
        * the minimum out of the data stored
        **/
        minStack();

        /*
        * Add a new element into the stack and the appropriate value to minStack
        * @param elem::the new element to be added
        **/
        void push(T elem);

        /*
        * Take out the last element from the stack and minStack too
        * Return the removed element
        **/
        T pop();

        /*
        * Return the last element in stack vector
        **/
        T peek();

        /*
        * Return the minimum value out of the stack
        * This corresponds to take the last element of min_stack vector
        **/
        T getMin();
    
    private:
        vector<T> min_stack;
        vector<T> stack;
        T min;
};

#include "minStack.cpp"
#endif