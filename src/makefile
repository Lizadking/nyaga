CXX = g++
CXXFLAGS = -Wall -g $(DEPFLAGS)
#final executable
BINARY = bin
#.cpp files 
CODEDIRECTORIES = ./lib
#.h files
INCLUDEDIRECTORIES = ./include

#generate files that encode make rules for the .h dependencies 
DEPFLAGS = -MP -MD

#for-style iteration and regular expressions
CFILES = $(foreach D,$(CODEDIRECTORIES),$(wildcard $(D)/*.c))
#regex for the replacement
OBJECTS = $(patsubst %.c,%.o,$(CFILES))
DEPFILES = $(patsubst %.c,%.o,$(CFILES))

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CXX) -o $@ $^
	
%.o:%.c

val:
	valgrind ./main

clean:
	rm *.o main
run: 
	./main