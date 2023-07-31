#include <string.h>
#include "main.h"
/**
 * _strstr - function name
 * @haystack: pointer1
 * @needle: pointer2
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
