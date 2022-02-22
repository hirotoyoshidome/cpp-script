.PHONY:	compile	link	run	clean

.SILENT:
compile:
	g++ -std=c++11 -c Main.cpp Sample.cpp

link:
	g++ -o ./MAIN Main.o Sample.o

run:
	g++ -std=c++11 -c Main.cpp Sample.cpp && g++ -o ./MAIN Main.o Sample.o && ./MAIN

clean:
	rm -f *.o
