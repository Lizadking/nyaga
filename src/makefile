CXX = g++
CXXFLAGS = -Wall -g

main: main.cpp  fileLoad.o manga.o
	$(CXX) $(CXXFLAGS) main.cpp fileLoad.o manga.o -o main

fileLoad.o: fileLoad.cpp fileLoad.o
	$(CXX) $(CXXFLAGS) -c fileLoad.cpp

manga.o: manga.h manga.cpp
	$(CXX) $(CXXFLAGS) -c manga.cpp

val:
	valgrind ./main

clean:
	rm *.o main
run: 
	./main