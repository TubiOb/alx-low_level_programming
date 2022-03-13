
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/* main - prints positive for numbers equals or greater than zero, prints negative for numbers less than zero and prints zero when 0 is inputed
 * Return: 0 if exited properly
 * */
int main(void)
{
	long int n;
	printf("Enter a number: ");
	scanf("%ld", &n);
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("%ld\n is Positive", n);
	}
	else if (n == 0) {
		printf("%ld\n is Zero", n);
	}
	else {
		printf("%ld\n is negative", n);
	}
	return (0);
}
