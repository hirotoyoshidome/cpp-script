.PHONY:	compile	link	build

.SILENT:
compile:
	g++ -std=c++11 -c Main.cpp

link:
	g++ -o ./MAIN main.o

build:
	g++ -std=c++11 -c Main.cpp && \
	g++ -o ./MAIN main.o

clean:
	rm -f *.o
