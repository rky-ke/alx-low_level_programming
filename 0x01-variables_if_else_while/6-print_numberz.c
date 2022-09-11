#include <stdio.h>
/**
 * main - Entry point
 *
 * Return : Always 0 (Successfuly returns the single digits from 0 to 9)
 */
int main(void)
{
	int d;

	for (d = '0' ; d <= '9' ; d++)
		putchar (d);
	putchar ('\n');
	return (0);
}
