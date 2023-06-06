CXX = g++
CXXFLAGS = -Wall -g

main: main.cpp fileLoad.h fileLoad.cpp manga.o
	$(CXX) $(CXXFLAGS) main.cpp fileLoad.h fileLoad.cpp manga.o -o main

manga.o: manga.h manga.cpp
	$(CXX) $(CXXFLAGS) -c manga.cpp

val:
	valgrind ./main
run: 
	./main