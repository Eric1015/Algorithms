#ifndef _QUICKSORT_H_
#define _QUICKSORT_H_
#include <vector>

template<class T>
class quickSort{
    public:

        /*
        * The constructor of quickSort 
        * It takes a vector and arrange them to ascending order or descending order
        * depending on the specification
        * @param array::the array to be sorted
        * @param isAsc::the condition variable determines whether to sort in 
        *               ascending order or descending order
        **/
        quickSort(std::vector<T> &arr, bool isAsc);
    
    private:

        /*
        * Sort the arr in ascending order
        * */
        void ascSort(std::vector<T> &arr);

        /*
        * Sort the arr in descending order
        * */
        void desSort(std::vector<T> &arr);

        /*
        * Obtain the pivot from the array
        * @param arr::the array to be partitioned
        * @param low::the lower bound of the range partition is performed
        * @param hi::the upper bound of the range partition is performed
        * */
        void partition(std::vector<T> &arr, int low, int hi);
};

#include "quickSort.cpp"
#endif