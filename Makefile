#############################################################################
# File name:  Makefile
# Author:     chadd williams
# Date:       Sept 1, 2021
# Class:      CS360
# Assignment: 
# Purpose:    
#############################################################################

CC=clang
CFLAGS=-g -Wall
VALGRIND_FLAGS=-v --leak-check=yes --track-origins=yes --leak-check=full --show-leak-kinds=all
ENSCRIPT_FLAGS=-C -T 2 -p - -M Letter -Ec --color -fCourier8

# -g  include debug symbols in the executable so that the code can be
# 		run through the debugger effectively
#
# -Wall	show all warnings from gcc

.PHONY: clean

# TARGETS is used below to hold the name of all the executables
# built by this Makefile.  This allows us to add the executable name
# in one place and have both all and clean updated. 

# Note that the list is spanning two lines.  The \ character indicates that
# the list continues on the next line.  WARNING: There must be no characters
# other than the newline after the \.  A blank space after the \ gives errors. 

TARGETS=bin/printf bin/scanf bin/commandLineArguments \
 bin/passByReference bin/define bin/struct bin/constants bin/math \
 bin/memoryLayout bin/helloWorld bin/fileReading bin/test \
 bin/pointers bin/pointerToStaticData bin/howToTest
 
all: bin ${TARGETS}

bin:
	mkdir -p bin

# LINK STEP
bin/math: bin/math.o
	clang -o bin/math -g bin/math.o -lm

# COMPILE STEP
bin/math.o: src/math.c
	clang -c -o bin/math.o -g -Wall src/math.c

# Link
bin/howToTest: bin/howToTest.o bin/driverUtil.o
	clang -o bin/howToTest -g bin/howToTest.o bin/driverUtil.o -lm

# Compile Tester
bin/howToTest.o: src/howToTest.c include/driverUtil.h
	clang -c -o bin/howToTest.o -g -Wall src/howToTest.c

# Compiler Test Framework
bin/driverUtil.o: src/driverUtil.c include/driverUtil.h
	clang -g -Wall -c -o bin/driverUtil.o src/driverUtil.c 

# Automatically generate rules
# https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html
bin/%: bin/%.o
	${CC} -o $@ ${CFLAGS} $^

bin/%.o: src/%.c
	${CC} -c -o $@ ${CFLAGS} $<


# Custom rules
# bin/helloworld: bin/helloworld.o 
# 	${CC} ${CFLAGS} -o bin/functionPointers bin/functionPointers.o 
	
# bin/helloworld.o: src/helloworld.c
# 	${CC} ${CFLAGS} -o bin/helloworld.o -c src/helloworld.c

clean:
	rm -rf bin/*.o ${TARGETS} bin/*.pdf

printAll:
	enscript ${ENSCRIPT_FLAGS} src/main.c  | ps2pdf - bin/main.pdf

valgrind: bin/main
	valgrind ${VALGRIND_FLAGS} bin/main

# https://www.gnu.org/software/make/manual/html_node/Chained-Rules.html
# https://www.gnu.org/software/make/manual/html_node/Special-Targets.html
.PRECIOUS: bin/%.o
