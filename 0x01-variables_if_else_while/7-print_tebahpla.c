#include<stdio.h>
/**
 * main - entry point
 * Descrition pritnt abcdefghijklmnopqrstuvwxyz
 * Return: 0 always
 */
int main(void)
{
	char ch = 'z';

	for (int i = 0; i < 26; i++)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}

