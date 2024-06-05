/****************************************************************************
 File name:  		howToTest.c
 Author:				chadd williams
 Date:					May 31, 2024
 Class:					CS 300
 Assignment:		C Primer
 Purpose:				Demonstrate C topics: testing
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "../include/driverUtil.h"


 /****************************************************************************
  Function: 	 	findTheMaxInAnArray

  Description: 	This function returns the largest int in an array

  Parameters:		aData - the array
								size - the number of elements in the array

  Returned:	 		integer - the largest value in the array
  ****************************************************************************/
int findTheMaxInAnArray(int aData[], const int size) {
	int max = 0;

	for (int i=1; i<size ; ++i){
		if (max < aData[i]) {
			max = aData[i];
		}
	}
	return max;
}

 /****************************************************************************
  Function: 	 	main

  Description: 	Test a few functions

  Parameters:		argc - the number of command line arguments
               	argv - the actual command line arguments

  Returned:	 		EXIT_SUCCESS
  ****************************************************************************/
int main (int argc, char* argv[]) {

	const int SIZE = 10;
	int aSmallArray[1] = {9};
	int aIncreasing[SIZE];
	int aDecreaseing[SIZE];
	int aSame[SIZE];
	int aNegatives[SIZE];

	for(int i=0; i< SIZE; ++i) {
		aIncreasing[i] = i;
	}
	assert(SIZE-1 == findTheMaxInAnArray(aIncreasing, SIZE), "Increasing Array");

	for(int i=0; i< SIZE; ++i) {
		aDecreaseing[i] = SIZE - i;
	}
	assert(SIZE == findTheMaxInAnArray(aDecreaseing, SIZE), "Decreaseing Array");

	for(int i=0; i< SIZE; ++i) {
		aSame[i] = 300;
	}
	assert(300 == findTheMaxInAnArray(aSame, SIZE), "Same Array");

	for(int i=0; i< SIZE; ++i) {
		aNegatives[i] = -(i+1);
	}
	assert(-1 == findTheMaxInAnArray(aNegatives, SIZE), "Negatives Array");

	assert(aSmallArray[0] == findTheMaxInAnArray(aSmallArray, SIZE), "Small Array");
  return EXIT_SUCCESS;
}
