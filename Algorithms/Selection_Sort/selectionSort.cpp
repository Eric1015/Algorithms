
#include "selectionSort.h"
#include <vector>
#include <cstdlib>

template <class T>
selectionSort<T>::selectionSort(std::vector<T> &arr, bool isAsc)
{
    if (isAsc)
        ascSort(arr);
    else
        desSort(arr);
}

template <class T>
void selectionSort<T>::ascSort(std::vector<T> &arr)
{
    for (size_t i = 0; i < arr.size(); i++)
    {
        for (size_t j = i; j < arr.size(); j++)
        {
            if (arr[j] < arr[i])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template <class T>
void selectionSort<T>::desSort(std::vector<T> &arr)
{
    for (size_t i = 0; i < arr.size(); i++)
    {
        for (size_t j = i; j < arr.size(); j++)
        {
            if (arr[j] > arr[i])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}