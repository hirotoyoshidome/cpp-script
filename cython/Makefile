.PHONY:	compile	pycompile	clean

.SILENT:
compile:
	g++ -std=c++17 -o sample.o -c sample.cpp

pycompile:
	python3 setup.py build_ext --inplace

clean:
	rm -rf ./*.o && rm -rf ./*.so && rm -rf ./build && rm -rf mycalc.cpp
