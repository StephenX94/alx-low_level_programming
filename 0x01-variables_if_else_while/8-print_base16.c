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
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
