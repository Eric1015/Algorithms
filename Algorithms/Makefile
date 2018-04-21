CC = g++
HEADERS = Insertion_Sort/insertionSort.h Selection_Sort/selectionSort.h Quick_Sort/quickSort.h
OBJS = main.o insertionSort.o selectionSort.o quickSort.o
CFLAGS = -c -Wall

output: main.o insertionSort.o
	$(CC) $(OBJS) -o output

main.o: main.cpp $(HEADERS)
	$(CC) $(CFLAGS) main.cpp

insertionSort.o: Insertion_Sort/insertionSort.cpp Insertion_Sort/insertionSort.h
	$(CC) $(CFLAGS) Insertion_Sort/insertionSort.cpp

selectionSort.o: Selection_Sort/selectionSort.cpp Selection_Sort/selectionSort.h
	$(CC) $(CFLAGS) Selection_Sort/selectionSort.cpp

quickSort.o: Quick_Sort/quickSort.cpp Quick_Sort/quickSort.h
	$(CC) $(CFLAGS) Quick_Sort/quickSort.cpp
clean:
	rm -f *.o main