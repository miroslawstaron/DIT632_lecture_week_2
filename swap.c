// here we include the declarations
// in the strict sense, this is not needed in this program
// as we only have one function
// but if we had many, then we do not have to worry about 
// keeping track which function is declared where
#include "function_declaration.h"
#include <stdio.h>



/*
* Here is the definition of the function
* Note! both parameters are pointers
* Otherwise the swap will not work!
*/
int swap(int* left, int* right)
{
	int temp;	// temporary variable

	// here is where the swapping takes place
	temp = *left;	
	*left = *right;
	*right = temp;

	// we return the left variable just for fun
	return *left;
}

/*
* This function demostrates swapping between two variables
* Note! this uses pointers
*/
void swap_example()
{
	int a = 12; // left for swapping
	int b = 13; // right for swapping

	// note that we use pointers, which are passed by value
	// the values of the pointers point to the place in memory (stack)
	// where a and b are stored
	int rSwap = swap(&a, &b);

	// print variables
	printf("Left: %d, right: %d\n", a, b);
}

