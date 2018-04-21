# Algorithms

## Sorting Algorithms in C++
### 1. Insertion Sort
####    -Good as a simple sorting algorithm
####    -Need to swap the elements several times so not good for write expensive situation
####    -Running time is **O(n)**
####    -More details on [wikipedia](https://en.wikipedia.org/wiki/Insertion_sort)

=============================================

### 2. Selection Sort
####    -Good as a simple sorting algorithm
####    -Good for expensive write because it will write at most **n** times
####    -This algorithm is not stable that is the order for same priority number may be swaped
####    -Running time is **O(n)**
####    -More details on [wikipedia](https://en.wikipedia.org/wiki/Selection_sort)

=============================================

### 3. Quick Sort
####    -Good as a efficient algorithm
####    -Good for unordered array or list
####    -This algorithm takes a pivot and put numbers smaller than the pivot on one side and numbers bigger than the pivot on the other side
####    -Running time is **O(nlogn)**
####    -It performs really poor on nearly sorted array or list with **O(n^2)** as running time
####    -More details on [wikipedia](https://en.wikipedia.org/wiki/Quicksort)
