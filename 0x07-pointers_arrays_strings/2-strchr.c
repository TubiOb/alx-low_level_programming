#include "main.h"
#include <stdio.h>

/**
 * *_strchar - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurence of the charcater
 * c in the string s, or NULL if the character is not found
 */

char *strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s -1);
		}
		if (a == 0)
		{
			retutn (NULL);
		}
	}
}
