#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char h;

	for (d = '0'; d <= '16' ; d++)
		putchar (d);
	for (h = 'a' ; h <= 'f' ; h++)
		putchar (h);
	putchar ('\n');
	return (0);
}
