/****************************************************************************
 File name:  		printf.c
 Author:				chadd williams
 Date:					May 31, 2024
 Class:					CS 300
 Assignment:		C Primer
 Purpose:				Demonstrate C topics: printf
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 /****************************************************************************
  Function: 	 	main

  Description: 	demonstrate printf

  Parameters:		argc - the number of command line arguments
               	argv - the actual command line arguments

  Returned:	 		EXIT_SUCCESS
  ****************************************************************************/
int main (int argc, char* argv[]) {

	const int SIZE = 10;
	int intValue = 300;
	long longValue = 3000000;
	unsigned int unsignedInt = 16;
	float floatValue = 300.300;
	double doubleValue = 300.300;
	char singleChar = 'P';
	char szName[SIZE];

	strncpy(szName,"CS300!", SIZE);

	printf("intValue: %d\n", intValue);
	printf("longValue: %ld\n", longValue);
	printf("unsigned int: %u\n", unsignedInt);
	printf("unsigned int (hex): %x\n", unsignedInt);
	printf("unsigned int (hex): %#x\n", unsignedInt);
	printf("floatValue: %f\n", floatValue);
	printf("doubleValue: %lf\n", doubleValue);
	printf("singleChar: %c\n", singleChar);

	printf("szString: %s\n", szName);

	printf("Pointer / Address: %p\n", &intValue);

  return EXIT_SUCCESS;
}
