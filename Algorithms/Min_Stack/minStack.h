
#ifndef _MINSTACK_H_
#define _MINSTACK_H_
#include <vector>

template<class T>
class minStack{
    public:

        /*
        * The constructor of minStack 
        * It takes a vector and arrange them to ascending order or descending order
        * depending on the specification
        * @param array::the array to be sorted
        * @param isAsc::the condition variable determines whether to sort in 
        *               ascending order or descending order
        **/
        minStack(std::vector<T> &arr, bool isAsc);
    
    private:
        vector<T> min_stack;
        vector<T> stack;
        T min;

        void push(T elem){
            if (min > elem)
                min_stack.push_back(elem);
            else
                min_stack.push_back(min);
            stack.push_back(elem);
        }

        T pop(){
            min_stack.pop();
            return stack.pop();
        }

        T peak(){
            return stack.peak();
        }

        T getMin(){

        }
};

#include "minStack.cpp"
#endif