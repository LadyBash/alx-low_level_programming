#include <stdlib.h>
#include <time.h>
/**
*  main-assigns a random num to int n everytime
* it executes, and print it
* Return: Always 0 (success)
**/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("is positive\n", n);
else if (n == 0)
printf("is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
return (0);
}

