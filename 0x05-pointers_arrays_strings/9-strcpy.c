#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy frpm
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int L = 0;
	int x = 0;

	while (*(src + L) != '\0')
	{
		L++;
	}
	for ( ; x < L ; x++)
	{
		dest[x] = src[x];
	}
	dest[L] = '\0';
	return (dest);
}
