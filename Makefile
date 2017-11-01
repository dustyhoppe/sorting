CC=g++
CFLAGS=-c -Wall

all: compile

compile: swap.o main.o bubble_sort.o selection_sort.o insertion_sort.o
	$(CC) swap.o main.o bubble_sort.o selection_sort.o insertion_sort.o -o sorter

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

bubble_sort.o: bubble_sort.cpp
	$(CC) $(CFLAGS) bubble_sort.cpp

selection_sort.o: selection_sort.cpp
	$(CC) $(CFLAGS) selection_sort.cpp

insertion_sort.o: insertion_sort.cpp
	$(CC) $(CFLAGS) insertion_sort.cpp

swap.o: swap.cpp
	$(CC) $(CFLAGS) swap.cpp

clean:
	rm -rf *o sorter