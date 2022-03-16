/*
 * File: 8-print_base16.c
 *
 */

#include <stdlib.h>
#include <stdio.h>

/*
 * main - prints in lowercase, all the numbers of base 16.
 * Return: 0
 */

int main(void)
{
	int num;
	char jk;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (jk = 'a'; jk <= 'f'; jk++)
		putchar(jk);

	putchar('\n');

	return (0);
}
