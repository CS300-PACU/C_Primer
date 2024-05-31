/****************************************************************************
 File name:  		scanf.c
 Author:				chadd williams
 Date:					May 31, 2024
 Class:					CS 300
 Assignment:		C Primer
 Purpose:				Demonstrate C topics: scanf
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 /****************************************************************************
  Function: 	 	main

  Description: 	demonstrate scanf

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
	char singleChar = 'P', newLineChar;
	char szName[SIZE];

	strncpy(szName,"CS300!", SIZE);


	// read from keyboard
	printf("Please enter an integer: ");
	scanf("%d", &intValue);

	printf("Please enter a long integer: ");
	scanf("%ld", &longValue);

	printf("Please enter an unsigned integer: ");
	scanf("%u", &unsignedInt);

	printf("Please enter a float: ");
	scanf("%f", &floatValue);

	printf("Please enter a double: ");
	scanf("%lf", &doubleValue);

	printf("Read the \\n character!\n");
	scanf("%c", &newLineChar);

	printf("Please ener a single character:");
	scanf("%c", &singleChar);

	printf("Read the \\n character!\n");
	scanf("%c", &newLineChar);


	printf("Please enter a string: (%d character or fewer) ",SIZE-1);
	scanf("%s", szName);

	
	//

	printf("intValue: %d\n", intValue);
	printf("longValue: %ld\n", longValue);
	printf("unsigned int: %u\n", unsignedInt);
	printf("unsigned int (hex): %x\n", unsignedInt);
	printf("unsigned int (hex): %#x\n", unsignedInt);
	printf("floatValue: %f\n", floatValue);
	printf("doubleValue: %lf\n", doubleValue);
	printf("singleChar: %c\n", singleChar);

	printf("szString: %s\n", szName);

	printf("Please enter an integer, a float, and an string: ");
	scanf("%d %f %s", &intValue, &floatValue, szName);

	printf("intValue: %d\n", intValue);
	printf("floatValue: %f\n", floatValue);
	printf("szString: %s\n", szName);

  return EXIT_SUCCESS;
}
