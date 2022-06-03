#include <stdio.h>
/**
 * main - prints the size of a bunch of data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char acharType;
	int aintType;
	long alongType;
	long long alonglongType;
	float afloatType;

	printf("Size of a char: %lu byte(s)\n", sizeof(acharType));
	printf("Size of an int: %lu byte(s)\n", sizeof(aintType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(alongType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglongType));
	printf("Size of a float: %lu bytes(s)\n", sizeof(afloatType));
	return (0);
}

