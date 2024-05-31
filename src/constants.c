/****************************************************************************
 File name:  constants.c
 Author:     chadd williams
 Date:       May 31, 2023
 Class:      CS 300
 Assignment: In Class Example
 Purpose:    Demonstrate the use constants
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// const int ARRAY_SIZE = 11; // causes errors on lines below
#define ARRAY_SIZE 11


// This creates a new type, ARRAY_TYPE, that is:
// int [SIZE];
//
typedef int ARRAY_TYPE[ARRAY_SIZE];


int gaArray[ARRAY_SIZE];


/****************************************************************************
 Function:    arrayTest

 Description: Demonstrate the use of constants
 
 Parameters:  value - an int to switch on

 Returned:    None
 ****************************************************************************/
void arrayTest(int value)
{
	const int SIZE = 10;
	int array[SIZE];
	ARRAY_TYPE anArray;
	int index;

	// Don't use a constant for 0 or 1
	// unless it has specific meaning
	for (index = 0; index < SIZE; ++index)
	{
		array[index] = index;
	}

	for (index = 0; index < ARRAY_SIZE; ++index)
	{
		anArray[index] = index * index;
	}

	switch (value) {
		//case SIZE: // ERROR
		//	printf("SIZE");
		//	break;
		case ARRAY_SIZE: // LEGAL
			printf("ARRAY_SIZE");
			break;
	}
}


// allow the function and main to see the same constants

// use an enum to create related
// constants
typedef enum {NO_ERROR = 0, ERROR = -1} ERROR_CODE;

#define CAUSE_ERROR 7

/****************************************************************************
 Function:    errorFunction

 Description: Demonstrate the use of constants
 
 Parameters:  value - an int to switch on

 Returned:    ERROR_CODE
 ****************************************************************************/
ERROR_CODE errorFunction(int value)
{
	ERROR_CODE retVal = NO_ERROR;

	switch(value) {
		case CAUSE_ERROR:
			retVal = ERROR;
			break;
	}

	return retVal;
}

/****************************************************************************
 Function:    main

 Description: Demonstrate the use of constants
 
 Parameters:  None

 Returned:    EXIT_SUCCESS
 ****************************************************************************/

int main () {

	int index;
	const int MAX = 10;
	const int EVEN_INCR = 2;
	ERROR_CODE eReturnedError;

	// print all int 0 to 10
	// Do use a constant for the conditional
	// since many loops end at the same value
	// Don't use a constant for 0 or 1
	for (index = 0; index <= MAX; ++index)
	{
		printf("%d, ", index);
	}
	printf("\n");

	// print all even ints int 2 to 10
	// Do use a constant to explain why the
	// index is incremented by 2
	for (index = 2; index <= MAX; index += EVEN_INCR)
	{
		printf("%d, ", index);
	}
	printf("\n");

	eReturnedError = errorFunction(CAUSE_ERROR);

	switch (eReturnedError)
	{
	case NO_ERROR:
		printf("NO ERROR\n");
		break;
	case ERROR:
		printf("!!ERROR!!\n");
		break;
	default:
		break;
	}


  return EXIT_SUCCESS;
}