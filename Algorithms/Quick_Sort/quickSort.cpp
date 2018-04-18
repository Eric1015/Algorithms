
#include "quickSort.h"
#include <vector>
#include <cstdlib>

template <class T>
quickSort<T>::quickSort(std::vector<T> &arr, bool isAsc)
{
    if (isAsc)
        ascSort(arr);
    else
        desSort(arr);
}

template <class T>
void quickSort<T>::ascSort(std::vector<T> &arr)
{

}

template <class T>
void quickSort<T>::desSort(std::vector<T> &arr)
{

}

template <class T>
void quickSort<T>::partition(std::vector<T> &arr, int low, int hi)
{

}