#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'v'; la++)
	{
		if (la != 'e' && la != 'q;)
			putchar(la);
	}

	putchar('\n');

	return (0);
}
