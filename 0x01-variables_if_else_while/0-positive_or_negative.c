#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{       /* variable definition */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)(
	/* positive function */
	printf("is positive");
	) 
	if (n == 0)(
	/* zero function */
	printf("is zero");
	)
	if (n < 0)(
	/* negative function */
	printf("is negative");
	)

	return (0);
}
