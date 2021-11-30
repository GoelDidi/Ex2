CC = gcc
FLAGS = -Wall -g
AllF = connections main.o my_mat.o

all: main.o my_mat.o
	$(CC) $(FLAGS) -o $(AllF)

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

clean:
	rm -f *.o connections