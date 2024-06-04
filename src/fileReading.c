/****************************************************************************
 File name:  		fileReading.c
 Author:				chadd williams
 Date:					May 31, 2024
 Class:					CS 300
 Assignment:		C Primer
 Purpose:				Demonstrate C topics:
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

 /****************************************************************************
  Function: 	 	main

  Description: 	Demonstrate file reading

  Parameters:		argc - the number of command line arguments
               	argv - the actual command line arguments

  Returned:	 		EXIT_SUCCESS
  ****************************************************************************/
int main (int argc, char* argv[]) {

	FILE *pActions;
	char symbol;
	int number, count;

	pActions = fopen ("data/numbersEOF.dat","r");

	if (NULL == pActions) {
		printf("ERROR: Cannot open file\n");
		exit(EXIT_FAILURE);
	}

	// read to END OF FILE
	while (EOF != fscanf (pActions, "%d", &number)){
		printf("%d\n", number);
	}

	fclose(pActions);
	
	printf("\n-----------------\n");

	// Read set number of items
	pActions = fopen ("data/numbersCount.dat","r");

	if (NULL == pActions) {
		printf("ERROR: Cannot open file\n");
		exit(EXIT_FAILURE);
	}

	fscanf(pActions, "%d", &count); // 11

	for (int i=0; i < count; ++i) {
		fscanf (pActions, "%d", &number);
		printf("%d\n", number);
	}
	fclose(pActions);


	printf("\n-----------------\n");
	// READ CHARACTERS
	pActions = fopen ("data/charEOF.dat","r");

	if (NULL == pActions) {
		printf("ERROR: Cannot open file\n");
		exit(EXIT_FAILURE);
	}

	while (EOF != fscanf (pActions, "%c", &symbol)){
		printf(">%c<", symbol);
	}

	fclose(pActions);

  return EXIT_SUCCESS;
}
