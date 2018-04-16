CC = g++
HEADERS = Insertion_Sort/insertionSort.h Selection_Sort/selectionSort.h
CFLAGS = -c -Wall

output: main.o insertionSort.o
	$(CC) main.o insertionSort.o -o output

main.o: main.cpp $(HEADERS)
	$(CC) $(CFLAGS) main.cpp

insertionSort.o: Insertion_Sort/insertionSort.cpp Insertion_Sort/insertionSort.h
	$(CC) $(CFLAGS) Insertion_Sort/insertionSort.cpp

selectionSort.o: Selection_Sort/selectionSort.cpp Selection_Sort/selectionSort.h
	$(CC) $(CFLAGS) Selection_Sort/selectionSort/cpp
clean:
	rm -f *.o main