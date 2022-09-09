#include <stdio.h>
/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	//Get the character to be written
	char cha = 'a';

	for( cha = 'a' ; cha <= 'z' ; cha++)
		putchar(cha);
		putchar('\n');

	return(0);
}
