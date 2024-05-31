/****************************************************************************
 File name:		struct.c
 Author:			chadd williams
 Date:				June 3, 2022
 Class:				CS300
 Assignment:	In Class Example
 Purpose:    	Demonstrate a struct
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Point
{
  int x;
  int y;
} PointData;


/****************************************************************************
 Function:    	printPoint

 Description: 	Print a point, use pass by value (copy)

 Parameters:  	sPoint - the point to print
 
 Returned:    	None
 ****************************************************************************/
void printPoint(PointData sPoint)
{
  printf("(%d, %d)\n", sPoint.x, sPoint.y);
}


/****************************************************************************
 Function:    	readPoint

 Description: 	Read a Point from the keyboard
                use pass by reference (pointer)

 Parameters:  	psPoint - the Point struct to fill with data
 
 Returned:    	None
 ****************************************************************************/
void readPoint(PointData *psPoint)
{
  // read an int from the keyboard, note the &
  // scanf is a way to read non-string data 
  // from the keyboard
  //
  // the & takes the address of the member (x or y)
  //
  // Note the -> is because psPoint is a pointer

  printf("X: ");
  scanf("%d", &psPoint->x);

  printf("Y: ");
  scanf("%d", &psPoint->y);
}


/****************************************************************************
 Function:    	main

 Description: 	Allocate and use a struct

 Parameters:  	None
 
 Returned:    	None
 ****************************************************************************/
int main ()
{
	const int SIZE = 3;

  struct Point sMyFavorite;

  // the typedef allows us to skip
  // the word struct
  PointData sYourFavorite;

	// an array of structs
	PointData aYourPoints[SIZE];

  // zero out all the data in the Point struct
  memset(&sMyFavorite, '\0', sizeof(PointData));

  sMyFavorite.x = 1;
  sMyFavorite.y = 2;

  printf("My Favorite: ");
  printPoint(sMyFavorite);


  printf("What is your favorite Point? ");
  readPoint(&sYourFavorite);

  printf("Your Favorite: ");
  printPoint(sYourFavorite);

  // zero out all the data in the array of Point struct
  memset(aYourPoints, '\0', sizeof(PointData) * SIZE);

  printf("What is your least favorite Point? ");
	readPoint(&aYourPoints[1]);

	for(int index = 0; index < SIZE; ++index){
		printPoint(aYourPoints[index]);
	}

	return EXIT_SUCCESS;
}
