/****************************************************************************
 File name:  		define.c
 Author:				chadd williams
 Date:					May 31, 2024
 Class:					CS 300
 Assignment:		C Primer
 Purpose:				Demonstrate C topics: #define
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>


// make global constants
#define MIN_PASSING_GRADE 70
#define MAX_SCORE 100
#define MAX_GRADE 'A'
#define GOAL "Graduation"


// make a macro
#define IS_MAX(value) (MAX_SCORE == value)

// use a macro to call a function
#define PRINT_SCORE(value) printf("Your score is: %d\n", value)

 /****************************************************************************
  Function: 	 	main

  Description: 	Demonstrate #define

  Parameters:		argc - the number of command line arguments
               	argv - the actual command line arguments

  Returned:	 		EXIT_SUCCESS
  ****************************************************************************/
int main (int argc, char* argv[]) {

	int grade;

	printf("Enter an integer grade (0-100): ");
	scanf("%d", &grade);
	PRINT_SCORE(grade);

	if (grade >= MIN_PASSING_GRADE) {
		printf("%s\n", GOAL);
	}

	if (MAX_SCORE == grade) {
		printf("%c\n", MAX_GRADE);
	}

	if (IS_MAX(grade)) {
		printf("%c\n", MAX_GRADE);
	}

	PRINT_SCORE(grade);

  return EXIT_SUCCESS;
}
