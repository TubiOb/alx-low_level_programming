#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/*
 * function main prints that alphabets in lowercase, then in uppercase, followed by a new line.
 * Return: 0 if exited properly, non zero otherwise
 *
 */

int main(void)
{
	int l = 'a';
	int u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l += 1;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u += 1;
	}
	putchar('\n');

	return(0);
}
