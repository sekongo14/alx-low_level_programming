#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads and prints the contents of a text file to stdout.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 * If the file cannot be opened or read, return 0.
 * If filename is NULL, return 0.
 * If write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (!filename)
		return (0);

	FILE *file = fopen(filename, "r");

	if (!file)
		return (0);

	char *buffer = malloc(letters + 1);

	if (!buffer)
	{
		fclose(file);
		return (0);
	}

	ssize_t bytesRead = fread(buffer, 1, letters, file);

	if (bytesRead < 0)
	{
		perror("Erreur lors de la lecture du fichier");
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[bytesRead] = '\0';

	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesWritten < 0 || (size_t)bytesWritten != bytesRead)
	{
		perror("Erreur lors de l'écriture sur la sortie standard");
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);
	return (bytesRead);
}
