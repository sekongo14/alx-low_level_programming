#include <stdio.h>
/**
 * main - entry point
 * Return: alwas 0 (succes)
 */
int main(void)
{
	printf("Size of a char: %u byte(s)", (unsigned int)sizeof(char));
	printf("Size of an int: %u byte(s)", (unsigned int)sizeof(int));
	printf("Size of a long int: %u byte(s)", (unsigned int)sizeof(long int));
	printf("Size of a long long int: %u byte(s)", (unsigned int)sizeof(long long int));
	printf("Size of a float: %u byte(s)", (unsigned int) sizeof(float));
	return (0);

}
