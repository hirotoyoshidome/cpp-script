.PHONY:	compile	build	run	clean

.SILENT:
compile:
	gcc -o main.o -c main.c
build:
	gcc -o MAIN main.o

run:
	gcc -o main.o -c main.c && gcc -o MAIN main.o && ./MAIN

clean:
	rm -rf main.o
