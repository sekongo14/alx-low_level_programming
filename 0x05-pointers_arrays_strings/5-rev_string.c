/**
 * rev_string - entry point
 *@s: pointer
 */
void rev_string(char *s)
{
	int leng = 0;
	int debut = 0;

	while (s[leng] != '\0')
	{
		leng++;
	}
	int fin = leng - 1;
	char temp;

	while (debut < fin)
	{
		temp = s[debut];
		s[debut] = s[fin];
		s[fin] = temp;
		debut++;
		fin--;
	}
}
