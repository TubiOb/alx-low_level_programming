/*
 * File: 6-print_numberz.c
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * function main prints all the single digit numbers of base 10 starting from 0, using only putchar, and without char variables.
 * Return 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
