/****************************************************************************
 File name:  		memoryLayout.c
 Author:				chadd williams
 Date:					May 31, 2024
 Class:					CS 300
 Assignment:		C Primer
 Purpose:				Demonstrate C topics: memory layout
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

 /****************************************************************************
  Function: 	 	main

  Description: 	demonstrate memory layout

  Parameters:		argc - the number of command line arguments
               	argv - the actual command line arguments

  Returned:	 		EXIT_SUCCESS
  ****************************************************************************/
int main (int argc, char* argv[]) {

	int localVariable;
	int* pPtrToHeapMemory;

	pPtrToHeapMemory = (int*) malloc(sizeof(int));

	printf("Address of local variable (on the stack) %p \n\n",
	&localVariable);

	printf("Address of memory allocated by malloc() (on the heap) %p \n\n",
	pPtrToHeapMemory);

	printf("Address of pointer holding heap memory address %p \n\n",
	&pPtrToHeapMemory);
	printf("Do you think the above address is on the heap or stack?\n\n");
	
  return EXIT_SUCCESS;
}
