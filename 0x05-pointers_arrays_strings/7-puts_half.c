/**
 * puts_half - entry point
 * @str: pointer
 */
void puts_half(char *str)
{
	leng = 0;
	leng1;

	while (str[leng] != '\0')
	{
		leng++;
	}
	leng1 = leng / 2;

	int i;

	for (i = leng1; i < leng; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
