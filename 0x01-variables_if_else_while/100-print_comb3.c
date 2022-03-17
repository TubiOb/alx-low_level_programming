/*
 * File: 100-print_comb.c
 */

#include <stdlib.h>
#include <stdio.h>

/*
 * function main prints numbers 00 to 99, being separated by comma and then space, in an ascending order.
 * Return: 0
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 9 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

