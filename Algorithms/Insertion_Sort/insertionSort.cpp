
#include "insertionSort.h"
#include <vector>
#include <cstdlib>

template <class T>
insertionSort<T>::insertionSort(std::vector<T> &arr, bool isAsc)
{
    if (isAsc)
        ascSort(arr);
    else
        desSort(arr);
}

template <class T>
void insertionSort<T>::ascSort(std::vector<T> &arr)
{
    for (size_t i = 1; i < arr.size(); i++)
    {
        T key = arr[i];
        size_t j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            T temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j--;
        }
    }
}

template <class T>
void insertionSort<T>::desSort(std::vector<T> &arr)
{
    for (size_t i = 1; i < arr.size(); i++)
    {
        T key = arr[i];
        size_t j = i - 1;
        while (key > arr[j] && j >= 0)
        {
            T temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j--;
        }
    }
}