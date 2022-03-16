/*
 * File: 7-print_tebahpla.c
 *
 */

#include <stdlib.h>
#include <stdio.h>

/*
 * function main prints the lowercase alphabets in reverse, followed by a new line.
 * Return: 0
 */

int main(void)
{
	char alphab;

	for (alphab = 'z'; alphab >= 'a'; alphab--)
		putchar(alphab);

	putchar('\n');

	return (0);
}
