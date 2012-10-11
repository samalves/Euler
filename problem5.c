#include <stdio.h>

/* What is the smalles number that is evenly divisible by 
 * all of the numbers from 1 to 20.
 * 
 * 2520 is the smallest number that can be divided by each of
 * the numbers from 1 to 10 without remainder
 */
 
 
int 
hasRemainder (int testNum) {

	int i;
	for (i = 11; i <= 20; i++)
		if (testNum % i)
			return 1;

	return 0; 
}

int 
findNum () {

	/* Since we already know that 2520 is the smalles number
	 * evenly divisible by 1 t0 10, we can start there 
	 */
	int num = 2520;

	/* Keep looping until a number that is
	 * even divisible is found. Increment by
	 * ten because the answer has to have a
	 * zero at end, so we can discard all other
	 * numbers. */
	while (hasRemainder(num)) num+=10;

	return num;
}

int 
main (){

	printf("Answer to problem 5: %i\n", findNum());
	return 0;
}
