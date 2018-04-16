
#include "selectionSort.h"
#include <vector>
#include <cstdlib>

template<class T>
selectionSort<T>::selectionSort(std::vector<T> &arr, bool isAsc){
    if (isAsc)
        ascSort(arr);
    else
        desSort(arr);
}

template<class T>
void selectionSort<T>::ascSort(std::vector<T> &arr){
}

template<class T>
void selectionSort<T>::desSort(std::vector<T> &arr){
}