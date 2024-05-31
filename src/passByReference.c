/****************************************************************************
 File name:  		passByReference.c
 Author:				chadd williams
 Date:					May 31, 2024
 Class:					CS 300
 Assignment:		C Primer
 Purpose:				Demonstrate C topics: pass by reference
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

 /****************************************************************************
  Function: 	 	updateInteger

  Description: 	Demonstrate pass by reference

  Parameters:		pInt - pointer to the int to update (pass by reference)
								intValue - the integer that is not pass by reference
  Returned:	 		None
  ****************************************************************************/

void updateInteger(int *pInt, int intValue) {

	*pInt = intValue * 2;
	intValue = 100;
}


 /****************************************************************************
  Function: 	 	updateArray

  Description: 	Demonstrate pass by reference

  Parameters:		aArray - the int array to update
								arraySize - the size of the array

  Returned:	 		None
  ****************************************************************************/

void updateArray(int aArray[], const int arraySize) {

	for(int index = 0; index < arraySize; ++index) {
		aArray[index] = aArray[index] * 2;
	}


}

 /****************************************************************************
  Function: 	 	main

  Description: 	Demonstrate pass by reference

  Parameters:		argc - the number of command line arguments
               	argv - the actual command line arguments

  Returned:	 		EXIT_SUCCESS
  ****************************************************************************/
int main (int argc, char* argv[]) {

	int passByReference = 100;
	int passByValue = 200;
	int intValue[SIZE] = {1, 2, 3};

	printf("passByReference: %d passByValue: %d\n", passByReference, passByValue);

	// to pass an argument by reference, pass the address of the
	// variable using &
	updateInteger(&passByReference, passByValue);

	printf("passByReference: %d passByValue: %d\n", passByReference, passByValue);

	// an array is automatically passed by reference
	updateArray(intValue, SIZE);

	for(int index = 0; index < SIZE; ++index){
		printf("intValue[%d] = %d\n", index, intValue[index]);
	}

  return EXIT_SUCCESS;
}
