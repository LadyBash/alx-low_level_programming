#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 9db36bc300832d3f950176fbaba06cc624d6dd76
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
<<<<<<< HEAD
} 

=======
}
=======
>>>>>>> 2fbd1b9681bfda3d3327114b5abc23f3ca7eeba5
 * main - Prints the last digit od the random
 * number stored in the variable n
 * Return: Always 0 (success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d", n, n % 10);
if (n % 10 > 5)
printf("and is greater than 5\n");
else if (n % 10 == 0)
printf("and is 0\n");
else if (n % 10 < 6 && n % 10 != 0)
printf("and is less than 6 and not 0\n");
return (0);

}

<<<<<<< HEAD
=======
>>>>>>> 2fa7626fe19f211659b58596e7acb3c57df5b9ad
>>>>>>> 9db36bc300832d3f950176fbaba06cc624d6dd76
>>>>>>> 2fbd1b9681bfda3d3327114b5abc23f3ca7eeba5