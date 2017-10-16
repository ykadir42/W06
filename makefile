all: list.o main.o
	gcc -o list_test list.o main.o
list.o: list.c list.h
	gcc -c list.c
main.o: main.c list.h
	gcc -c main.c
clean:
	rm *.o
run: all
	./list_test