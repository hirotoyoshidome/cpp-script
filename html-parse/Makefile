.PHONY:	compile	link	build	clean

.SILENT:
compile:
	g++ -std=c++11 -c Main.cpp -I ../libs/myhtml-4.0.5/include

link:
	g++ -o ./MAIN Main.o -L ../libs/myhtml-4.0.5/lib -Wl,-R ../libs/myhtml-4.0.5/lib -lmyhtml

build:
	g++ -std=c++11 -c Main.cpp -I ../libs/myhtml-4.0.5/include && \
	g++ -o ./MAIN Main.o -L ../libs/myhtml-4.0.5/lib -Wl,-R ../libs/myhtml-4.0.5/lib -lmyhtml

clean:
	rm -f *.o
