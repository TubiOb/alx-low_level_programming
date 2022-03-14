#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * function main prints "Positive" for numbers greater than zero, 
 * prints "Negative" for numbers less than zero, 
 * and prints zero when 0 is inputted
 * Return: 0 if exited properly, non zero otherwise
 * 
 */

int main(void)
{
	long int n;

	scanf("%ld", &n);
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
	{
		printf("%ld is positive\n", n);
	}
	else if (n < 0) 
	{
		printf("%ld is negative\n", n);
	}
	else 
	{
		printf("%ld is zero\n", n);
	}
	return (0);
}
