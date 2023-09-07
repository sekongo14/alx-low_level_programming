#include "main.h"
#include <stdio.h>

/**
 *  read_textfile - fontion that read content of fille
 *  @filename: name of file
 *  @letters: letters
 *  Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fichier;
	char *ligne;

	fichier = fopen(filename, "r");
	if (filename == NULL)
	{
		return (0);
	}

	ligne = malloc(sizeof(letters));
	if (ligne == NULL)
	{
		return (0);
	}

	while (fgets(ligne, letters, fichier) != NULL)
	{
		printf("%s", ligne);
	}
	free(ligne);

	fclose(fichier);
	return (0);

}
