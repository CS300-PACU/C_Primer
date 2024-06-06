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
#include <limits.h> // INT_MAX INT_MIN

#define SIZE 10
#define LARGE_SIZE 100

 /****************************************************************************
  Function: 	 	findTheMaxInAnArray

  Description: 	This function returns the largest int in an array

  Parameters:		aData - the array
								size - the number of elements in the array

  Returned:	 		integer - the largest value in the array
  ****************************************************************************/
int findTheMaxInAnArray(int aData[], const int size) {
	int max = 0;
	// /nat *(int(*)[10])aData
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
	int aIncreasing[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int aDecreasing[SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int aMidMax[SIZE] = {10, 1, 8, 17, 5, 100, 14, 30, 21, 11};
	
	assert(SIZE-1 == findTheMaxInAnArray(aIncreasing, SIZE), "Increasing Array");
	assert(SIZE == findTheMaxInAnArray(aDecreasing, SIZE), "Decreasing Array");
	assert(aMidMax[5] == findTheMaxInAnArray(aMidMax, SIZE), "MidMax Array");

	int aSmallArray[1] = {9};
	int aSame[SIZE] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
	int aNegatives[SIZE] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};

	assert(2 == findTheMaxInAnArray(aSame, SIZE), "Same Array");
	assert(-1 == findTheMaxInAnArray(aNegatives, SIZE), "Negatives Array");
	assert(aSmallArray[0] == findTheMaxInAnArray(aSmallArray, SIZE),
		"Small Array");

	// #include <limits.h>
	int aMaxMin[] = {INT_MAX, INT_MIN};
	int aMinMax[] = {INT_MIN, INT_MAX};

	assert(INT_MAX == findTheMaxInAnArray(aMaxMin, 2), "MAX MIN");
	assert(INT_MAX == findTheMaxInAnArray(aMinMax, 2), "MIN MAX");

	int aLargeArray[LARGE_SIZE];

	for(int i=0; i< LARGE_SIZE; ++i) {	
		if( i % 2 == 0) {
			aLargeArray[i] = i*2; // [98] = 2*98
		}
		else {
			aLargeArray[i] = i; 	// [99] = 99
		}
	}
	assert(2*98 == findTheMaxInAnArray(aLargeArray, LARGE_SIZE),
		"Large Array");

  return EXIT_SUCCESS;
}
