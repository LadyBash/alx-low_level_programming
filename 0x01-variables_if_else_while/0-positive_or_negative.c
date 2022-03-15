#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/**
*  main-assigns a random num to int n everytime
* it executes, and print it
* Return: Always 0 (success)
**/

=======
#include <stdio.h>

/**
* main - assigns a random num to int n everytime
* it executes, and print it
* Return: Always 0 (success)
*/
>>>>>>> 2fa7626fe19f211659b58596e7acb3c57df5b9ad
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
<<<<<<< HEAD

if (n > 0)
printf("is positive\n", n);
else if (n == 0)
printf("is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
=======
if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else if (n < 0)
	printf("%d is negative\n", n);
>>>>>>> 2fa7626fe19f211659b58596e7acb3c57df5b9ad
return (0);
}

