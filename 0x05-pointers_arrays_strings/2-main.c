#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char *str;
	int len;

	str = "Ronald!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
