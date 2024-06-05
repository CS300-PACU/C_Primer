/**************************************************************************
 File name:   driverUtil.c
 Author:      Computer Science, Pacific University
 Date:        Sept 30, 2022
 Class:       CS 300
 Assignment:  Datastructures
 Purpose:     provide framework for testing
 *************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#include "../include/driverUtil.h"
#include <math.h>
#include <stdint.h>


 /****************************************************************************
	Function: 	 	success

	Description: print a success message

	Parameters:	szStr - the message to print

	Returned:	 	none
	****************************************************************************/
static void success (char* szStr) {
	printf ("SUCCESS: %s\n", szStr);
}

/****************************************************************************
 Function: 	 	failure

 Description: print a failure message

 Parameters:	szStr - the message to print

 Returned:	 	none
 ****************************************************************************/
static void failure (char* szStr) {
	printf ("FAILURE: %s\n", szStr);
}

/****************************************************************************
 Function: 	 	checkAssert

 Description: if the expression is true, assert success; otherwise, assert
							failure
							DO NOT CALL THIS FUNCTION DIRECTLY
							use: assert(cond, trueMsg, falseMsg);

 Parameters:	szStr - the message to print

 Returned:	 	none
 ****************************************************************************/
void checkAssert (bool bExpression, char* pszMsg, 
char *szFile, int line) {

	char *pStr;
	int fileAndLineLength;
	const int SPACES = 5; // " - " ':' '\0'

	fileAndLineLength = strlen(szFile) + (int) log(line);

	if (bExpression) {
		pStr = malloc(strlen(pszMsg) + fileAndLineLength + SPACES);
		sprintf(pStr, "%s - %s:%d", pszMsg, szFile, line);
		success (pStr);
	}
	else {
		pStr = malloc(strlen(pszMsg) + fileAndLineLength + SPACES);
		sprintf(pStr, "%s - %s:%d", pszMsg, szFile, line);
		failure (pStr);
	}
	fflush(NULL);
	free(pStr);
}