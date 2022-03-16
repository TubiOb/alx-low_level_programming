#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* 
 * function main prints all the letters of the alphabetsbut skips q and e.
 * Return: 0
 **
 */

 int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if((c == 'e') || (c == 'q'))
		{
			continue;
		}
             else
	     {
		     putchar(c);
	     }
	}
	putchar('\n');

	return (0);
}
