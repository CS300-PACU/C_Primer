/****************************************************************************
 File name:  		commandLineArguments.c
 Author:				chadd williams
 Date:					May 31, 2024
 Class:					CS 300
 Assignment:		C Primer
 Purpose:				Demonstrate C topics: command line arguments
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

 /****************************************************************************
  Function: 	 	main

  Description: 	Demonstrate command line arguments

  Parameters:		argc - the number of command line arguments
               	argv - the actual command line arguments

  Returned:	 		EXIT_SUCCESS
  ****************************************************************************/
int main (int argc, char* argv[]) {

	int index;

	printf("\n");

	for(index = 0; index < argc; ++ index) {
		printf("argv[%d]: %s\n", index, argv[index]);
	}
	
	printf("\n");

  return EXIT_SUCCESS;
}
