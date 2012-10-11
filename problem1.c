/* Find the sum of all the multiples of 3 or 5 below 1000. */
/* gcc `pkg-config --cflags --libs glib-2.0` problem1.c -o problem1 */

#include <stdio.h>
#include <glib.h> /* <-- ended up not needing it */

main (){

	int sum = 0;
	
	int i;
	for (i = 1; i < 1000; i++)
		if (!(i % 3) || !(i % 5)) sum += i;
		
	printf ("%d\n", sum);	
}
