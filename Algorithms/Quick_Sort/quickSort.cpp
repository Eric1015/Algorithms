
#include "quickSort.h"
#include <vector>
#include <cstdlib>

template <class T>
quickSort<T>::quickSort(std::vector<T> &arr, bool isAsc)
{
    if (isAsc){
        
    }
    else{

    }
}

template <class T>
int quickSort<T>::ascPartition(std::vector<T> &arr, int low, int hi)
{
    int pivot = hi;
    int count = low - 1;
    for (int i = low; i < hi; i++){
        if (arr[i] < arr[pivot]){
            T temp = arr[i];
            count++;
            arr[i] = arr[count];
            arr[count] = temp;
        }
    }
    count++;
    T temp = arr[count];
    arr[count] = arr[pivot];
    arr[pivot] = temp;

    return count;
}

template <class T>
int quickSort<T>::ascPartition(std::vector<T> &arr, int low, int hi)
{
    int pivot = hi;
    int count = low - 1;
    for (int i = low; i < hi; i++){
        if (arr[i] > arr[pivot]){
            T temp = arr[i];
            count++;
            arr[i] = arr[count];
            arr[count] = temp;
        }
    }
    count++;
    T temp = arr[count];
    arr[count] = arr[pivot];
    arr[pivot] = temp;

    return count;
}