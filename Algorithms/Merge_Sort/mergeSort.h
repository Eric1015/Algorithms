#ifndef _MERGESORT_H_
#define _MERGESORT_H_
#include <vector>

template<class T>
class mergeSort{
    public:

        /*
        * The constructor of mergeSort 
        * It takes a vector and arrange them to ascending order or descending order
        * depending on the specification
        * @param array::the array to be sorted
        * @param isAsc::the condition variable determines whether to sort in 
        *               ascending order or descending order
        **/
        mergeSort(std::vector<T> &arr, bool isAsc);
    
    private:

        void mergeSort<T>::mergeSortHelper(std::vector<T> &arr, bool isAsc, int low, int hi);

};

#include "mergeSort.cpp"
#endif