/****************************************************************************
 File name:  		math.c
 Author:				chadd williams
 Date:					May 31, 2024
 Class:					CS 300
 Assignment:		C Primer
 Purpose:				Demonstrate C topics: math library
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// 
// Be sure to LINK this with the -lm option 
// -l (elle) to add a library
// m: math library: libm.so
// to Link in (madeup) library: libCS300.so you would:
// -lCS300


/*
# LINK STEP, NOTE -lm here!
bin/math: bin/math.o
	clang -o bin/math -g bin/math.o -lm 

# COMPILE STEP
bin/math.o: src/math.c
	clang -c -o bin/math.o -g -Wall src/math.c
*/
 /****************************************************************************
  Function: 	 	main

  Description: 	Use math functions

  Parameters:		argc - the number of command line arguments
               	argv - the actual command line arguments

  Returned:	 		EXIT_SUCCESS
  ****************************************************************************/
int main (int argc, char* argv[]) {

	double angle;

	printf("Enter an angle (0 - 360): ");
	scanf("%lf", &angle);

	printf("cos(%lf) = %lf  sin(%lf) = %lf\n", angle, cos(angle),
	angle, sin(angle));


	printf("e^x, 2.08^%lf = %lf\n", angle, exp(angle));

	printf("log10(%lf) = %lf\n", angle, log10(angle));

	printf("log2(%lf) = %lf\n", angle, log2(angle));

	printf("pow(10,log10(%lf)) = %lf\n", angle, pow(10, log10(angle)));



  return EXIT_SUCCESS;
}
