#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* function main accepts and prints the last digit of the variable n. 
 * It prints 4 strings which include:
 * "Last digit of" as the begining of the output,
 * "and is greater than 5" if the last digit of the given variable n is greater than 5,
 * "and is zero" if the last digit of the given variable n is equal to 0,
 * "and is less than 6 and not 0"id the last digit of the given variable n is less than 6 and not 0.
 * Return: 0 if exited properly, non zero otherwise
 *
 */
int main(void)
{
	
	int n;
	char i, c, j, k;
	lastDigit;
	scanf("%ld", &n);
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastDigit = n % 10; lastDigit > 5;)
	{
		printf("Last digit of %ld %c lastDigit %c\n", n, 'is', 'and is greater than 5');
	}
	else if (lastDigit = n % 10; lastDigit = 6 > n != 0;)
	{
		printf("Last digit of %ld %c lastDigit %c\n", n, 'is', 'and is less than 6 and not 0');
	}
	else
	{
		printf("Last digit of %ld %c lastDigit %c\n", n, 'is', 'and is zero');
	}
	return (0);
}

