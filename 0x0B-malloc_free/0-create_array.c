#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of array to create
 * @c: char to initiate the array c
 *
 * Return: a pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char c;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';

	return (p);
}
