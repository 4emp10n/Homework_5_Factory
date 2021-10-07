CC = g++

SOURCES = main.cpp Toy.cpp ToyFactory.cpp

all:
	$(CC) $(SOURCES) -o main

run:
	@./main

clean:
	@rm -rf *.o main