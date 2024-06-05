/**************************************************************************
 File name:   driverUtil.h
 Author:      Computer Science, Pacific University
 Date:        Sept 30, 2022
 Class:       CS 300
 Assignment:  Datastructures
 Purpose:     provide framework for testing
 *************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define assert(cond, msg) checkAssert(cond, msg, __FILE__, __LINE__)

extern void checkAssert (bool bExpression, char* pszMsg, 
char *szFile, int line);