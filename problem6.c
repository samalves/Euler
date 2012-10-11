#include <stdio.h>
#define square(x) (x)*(x)

/* Problem 6 of project Euler.
 * Find the difference between the sum of the squares of the first one hundred
 * natural numbers and the square of the sum.
 */

/* gcc -Wall -std=c99 problem6.c -o problem6 */

int 
main (){
	
	int sumOfSquares = 0;
	int sumOfEverything = 0;
	int squareOfTheSum = 0;

	for (int i = 1; i <= 100; i++){
		sumOfEverything = sumOfEverything + i;
	}

	for (int i = 1; i <= 100; i++){
		sumOfSquares = sumOfSquares + square(i);
	}

	squareOfTheSum = square(sumOfEverything);

	printf("%d\n", squareOfTheSum);
	printf("%d\n", sumOfSquares);

	printf("Difference: %d\n", squareOfTheSum - sumOfSquares);

	return 0;

}
