.PHONY:	compile	link	run	clean

.SILENT:
compile:
	g++ -std=c++17 -c Logger.cpp main.cpp

link:
	g++ -o ./MAIN main.o Logger.o

run:
	g++ -std=c++17 -c Logger.cpp main.cpp && g++ -o ./MAIN main.o Logger.o && ./MAIN

clean:
	rm -f *.o
