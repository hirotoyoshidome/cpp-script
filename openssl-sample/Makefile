.PHONY:	compile	link	run	clear

.SILENT:
compile:
	g++ -g -Wall -std=c++11 -o main.o -c main.cpp -I ../libs/openssl-3.2.1/include

link:
	g++ -g -Wall -o MAIN main.o

run:
	make compile && make link && ./MAIN

clear:
	rm -f *.o
