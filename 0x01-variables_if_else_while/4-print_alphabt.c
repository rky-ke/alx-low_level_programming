#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alfa, e, q;

	e = 'e';
	q = 'q';

	for (alfa = 'a'; alfa <= 'z'; alfa++)
	{
		if (alfa != e && alfa != q)
		{
			putchar (alfa);
		}
	}
	putchar ('\n');
	return (0);
}
