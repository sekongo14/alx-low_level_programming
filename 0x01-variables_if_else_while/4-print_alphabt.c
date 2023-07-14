#include<stdio.h>
/**
 * main - entry point
 * Descrition pritnt abcdefghijklmnopqrstuvwxyz
 * Return: 0 always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
