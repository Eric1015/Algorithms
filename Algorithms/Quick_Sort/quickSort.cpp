
#include "quickSort.h"
#include <vector>
#include <cstdlib>

template <class T>
quickSort<T>::quickSort(std::vector<T> &arr, bool isAsc)
{
    quickSortHelper(arr, isAsc, 0, arr.size() - 1);
}

template<class T>
void quickSort<T>::quickSortHelper(std::vector<T> &arr, bool isAsc, int low, int hi){
    if (isAsc){
        int newPivot = ascPartition(arr, low, hi);
        if (newPivot != low && newPivot != hi){
            quickSortHelper(arr, isAsc, low, newPivot-1);
            quickSortHelper(arr, isAsc, newPivot+1, hi);
        }
        else if(newPivot == low && newPivot != hi){
            quickSortHelper(arr, isAsc, newPivot+1, hi);
        }
        else if(newPivot != low && newPivot == hi){
            quickSortHelper(arr, isAsc, low, newPivot-1);
        }
    }
    else{
        int newPivot = desPartition(arr, low, hi);
        if (newPivot != low && newPivot != hi){
            quickSortHelper(arr, isAsc, low, newPivot-1);
            quickSortHelper(arr, isAsc, newPivot+1, hi);
        }
        else if(newPivot == low && newPivot != hi){
            quickSortHelper(arr, isAsc, newPivot+1, hi);
        }
        else if(newPivot != low && newPivot == hi){
            quickSortHelper(arr, isAsc, low, newPivot-1);
        }
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