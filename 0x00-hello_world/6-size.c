#include <stdio.h>
/**
 * main - entry point
 * Return: alwas 0 (succes)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)", (unsigned int)sizeof(char));
	printf("Size of an int: %lu byte(s)", (unsigned int)sizeof(int));
	printf("Size of a long int: %lu byte(s)", (unsigned int)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", (unsigned int)
	sizeof(long long int));
	printf("Size of a float: %lu byte(s)", (unsigned int)sizeof(float));
	return (0);

}
