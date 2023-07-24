/**
 * rev_string - entry point
 *@s: pointer
 */
void rev_string(char *s)
{
	int leng = 0;
	int debut = 0;
	char temp;

	while (s[leng] != '\0')
	{
		leng++;
	}
	int fin = leng = 1;
	while (debut < fin)
	{
		temp = s[debut];
		s[debut] = s[fin];
		s[fin] = temp;
		debut++;
		fin--;
	}


}
