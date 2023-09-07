#include "main.h"
#include <stdio.h>

/**
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE fichier;

	fichier = fopen(filename, "r")
	if (filename == NULL)
	{
		return (0);
	}

	while (fgets(letters, sizeof(letters), fichier) != NULL)
	{
		printf("%s", letters);
	}

	fclose(fichier);
	return (0);

}
