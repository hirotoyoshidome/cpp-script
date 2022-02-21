.PHONY:	compile	link	run	clean

.SILENT:
compile:
	g++ -std=c++11 -c Main.cpp

link:
	g++ -o ./MAIN Main.o

run:
	g++ -std=c++11 -c Main.cpp && g++ -o ./MAIN Main.o && ./MAIN

clean:
	rm -f *.o
