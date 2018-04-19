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
        * Helper function for recursively call the partition function 
        * until the pivot equals to both of low and hi
        * @param arr::the array to be sorted
        * @param isAsc::determine whether to sort arr is ascending order or descending order
        * @param low::the lower bound of the partition
        * @param hi::the upper bound of the partition
        * */
        void quickSort<T>::quickSortHelper(std::vector<T> &arr, bool isAsc, int low, int hi);

        /*
        * Obtain the pivot from the array and return it
        * Sort the forward and backward of pivot so everything before the pivot is smaller than pivot
        * and everything after the pivot is larger than pivot
        * @param arr::the array to be partitioned
        * @param low::the lower bound of the range partition is performed
        * @param hi::the upper bound of the range partition is performed
        * */
        int ascPartition(std::vector<T> &arr, int low, int hi);

                /*
        * Obtain the pivot from the array and return it
        * Sort the forward and backward of pivot so everything before the pivot is larger than pivot
        * and everything after the pivot is smaller than pivot
        * @param arr::the array to be partitioned
        * @param low::the lower bound of the range partition is performed
        * @param hi::the upper bound of the range partition is performed
        * */
        int desPartition(std::vector<T> &arr, int low, int hi);
};

#include "quickSort.cpp"
#endif