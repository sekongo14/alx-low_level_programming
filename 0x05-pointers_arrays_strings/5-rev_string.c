/**
 * rev_string - entry point
 *@s: pointer
 */
void rev_string(char *s)
{
	int leng = 0;
	int debut = 0;
	int fin = leng - 1;
	char temp;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	while (debut < fin)
	{
		temp = s[debut];
		s[debut] = s[fin];
		s[fin] = temp;
		debut++;
		fin--;
	}


}
