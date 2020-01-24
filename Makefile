EXEC=quiquiquoi
SOURCES=$(wildcard *.cc)
OBJECTS=$(SOURCES:.cc=.o)
CCFLAGS=-Wall -Werror -std=c++11 `sdl-config --cflags`
CC=g++
$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) `sdl-config --libs` -o $(EXEC)
%.o: %.cc
	$(CC) $(CCFLAGS) -c $< -o $@
clean:
	rm -f $(OBJECTS) $(EXEC)
all: clean $(EXEC)
	rm -f $(OBJECTS)