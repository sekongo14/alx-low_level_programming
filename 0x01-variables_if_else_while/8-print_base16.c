#include<stdio.h>
/**
 * main - entry point
 * Descrition pritnt abcdefghijklmnopqrstuvwxyz
 * Return: 0 always
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
