#include <stdio.h>

/**
 * main -Entry point
 * Description: "prints the size of various types"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v;
	char y;
	float w;
	long int x;
	long long int z;

	printf("Size of a char: %lu byte(s)\n", sizeof(y));
	printf("Size of an int: %lu byte(s)\n", sizeof(v));
	printf("Size of a long int: %lu byte(s)\n", sizeof(x));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(z));
	printf("Size of a float: %lu byte(s)\n", sizeof(w));
	return (0);
}
