#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include </alx-low_level_programming/0x1A-hash_tables/hash_tables.h>

/**
 * main - check the code for ALX-Africa Cohort 10 students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS)
}
