.PHONY:	compile	link	build	clean

.SILENT:
compile:
	g++ -std=c++11 -c Main.cpp -I ../libs/myhtml-4.0.5/include

link:
	g++ -o ./MAIN Main.o -L ../libs/myhtml-4.0.5/include

build:
	g++ -std=c++11 -c Main.cpp && \
	g++ -o ./MAIN Main.o

clean:
	rm -f *.o
