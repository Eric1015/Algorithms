
#include "insertionSort.h"
#include <vector>

template<class T>
insertionSort::insertionSort(std::vector<T> &arr, bool isAsc){
    if (isAsc)
        ascSort(arr);
    else
        desSort(arr);
}

template<class T>
insertionSort::ascSort(std::vector<T> &arr){
    for (size_t i = 1; i < arr.size(); i++){
        T key = arr[i];
        size_t j = i - 1;
        while(key < arr[j] && j >= 0){
            T temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j--;
        }
    }
}

template<class T>
insertionSort::desSort(std::vector<T> &arr){
    for (size_t i = 1; i< arr.size(); i++){
                T key = arr[i];
        size_t j = i - 1;
        while(key > arr[j] && j >= 0){
            T temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j--;
        }
    }
}