# The name of the source files
SOURCES = string.c

# The name of the executable
EXE = string

# Flags for compilation (adding warnings are always good)
CFLAGS = -Wall

# Flags for linking (none for the moment)
LDFLAGS =

# Libraries to link with (none for the moment)
LIBS =

# Use the GCC frontend program when linking
LD = gcc

string: string.c
	gcc string.c -o string

run:
	./string
