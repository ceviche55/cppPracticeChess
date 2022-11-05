# Our output program name
PROG = chess

# The compiler
CC = g++

# Debugging flags
CPPFLAGS = -g -Wall

# Object files that will be linked together
OBJS = main.o peices.o

# Program (example) depends on object files (.o files)
$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

# main.o depends on main.cpp
main.o : main.cpp drawBoard.h
	$(CC) $(CPPFLAGS) -c main.cpp

peices.o : peices.cpp peices.h
	$(CC) $(CPPFLAGS) -c peices.cpp

# Clean removes build files that are created
clean:
	rm -f core $(PROG) $(OBJS)