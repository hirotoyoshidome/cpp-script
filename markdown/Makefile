.PHONY: compile	link	run	clean

.SILENT:
compile:
	g++ -std=c++17 -c Main.cpp

link:
	g++ -std=c++17 -o MAIN Main.o

run:
	g++ -std=c++17 -c Main.cpp && g++ -std=c++17 -o MAIN Main.o && ./MAIN

clean:
	rm -rf ./*.o
