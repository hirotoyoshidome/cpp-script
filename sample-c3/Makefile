.PHONY:	compile	link	run	clean

.SILENT:
compile:
	clang-10 -c main.c -o main.o

link:
	clang-10 main.o -o MAIN

run:
	clang-10 -c main.c -o main.o && clang-10 main.o -o MAIN && ./MAIN

clean:
	rm MAIN *.o

