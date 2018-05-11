#include <vector>
#include <iostream>
#include <cstdlib>
#include "Insertion_Sort/insertionSort.h"
#include "Selection_Sort/selectionSort.h"
#include "Quick_Sort/quickSort.h"
#include "Merge_Sort/mergeSort.h"
#include "Min_Stack/minStack.h"

using namespace std;

/*
* Please run this program with ./main * * * * ...
* numbers go in * * *
**/
int main(void){
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(2);
    arr.push_back(4);

    vector<int> copy1 = arr;

    cout << "Before sorting: ";
    for (size_t i = 0; i < copy1.size(); i++){
        cout << copy1[i] << " ";
    }
    cout << endl;

    insertionSort<int>(copy1, true);

    cout << "After sorting in ascending order: ";
    for (size_t i = 0; i < copy1.size(); i++){
        cout << copy1[i] << " ";
    }
    cout << endl;

    vector<int> copy2 = arr;

    insertionSort<int>(copy2, false);

    cout << "After sorting in ascending order: ";
    for (size_t i = 0; i < copy2.size(); i++){
        cout << copy2[i] << " ";
    }
    cout << endl;
}