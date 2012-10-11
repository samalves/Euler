#include <stdio.h>

/* Find the sum of all the even-valued terms in the sequence which do not
 * exceed four million.
 */

int 
main (){

	int x = 0;	/* first term */
	int y = 1;	/* second term */
	int z = 0;	/* The fibonacci term */

	int total = 0;	/* Stores the sum of all even-valued terms */

	while (z < 4000000 ){

		/* Create a new fibonacci sequence */
		z = x + y;

		/* Test to see if the number is even.
 			If so, add it to our running total.
		*/
		if ( z % 2 == 0)
			total += z;

		/* Swap the new terms in order to create a new fibonacci
 		 * sequence
 		 */
		x = y;
		y = z;
	}

	printf("result: %d\n", total);

	return 0;
}
