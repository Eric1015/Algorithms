CC = g++

CFLAGS = -c -Wall

output: main.o insertionSort.o
	$(CC) main.o insertionSort.o -o output

main.o: main.cpp Insertion_Sort/insertionSort.h
	$(CC) $(CFLAGS) main.cpp

insertionSort.o: Insertion_Sort/insertionSort.cpp Insertion_Sort/insertionSort.h
	$(CC) $(CFLAGS) Insertion_Sort/insertionSort.cpp

clean:
	rm -f *.o main