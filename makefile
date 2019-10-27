all: main.o node.o
	gcc -o program main.o node.o

main.o: main.c node.h
	gcc -c main.c

node.o: node.c node.h
	gcc -c node.c
