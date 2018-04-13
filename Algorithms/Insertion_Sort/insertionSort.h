
#ifndef _INSERTIONSORT_H_
#define _INSERTIONSORT_H_
#include <vector>

template<class T>
class insertionSort{
    public:

        /*
        * The constructor of insertionSort 
        * It takes a vector and arrange them to ascending order or descending order
        * depending on the specification
        * @param array::the array to be sorted
        * @param isAsc::the condition variable determines whether to sort in 
        *               ascending order or descending order
        **/
        insertionSort(std::vector<T> &arr, bool isAsc);
    
    private:

        /*
        * Sort the arr in ascending order
        * */
        void ascSort(std::vector<T> &arr);

        /*
        * Sort the arr in descending order
        * */
        void desSort(std::vector<T> &arr);
};

#include "insertionSort.cpp"
#endif