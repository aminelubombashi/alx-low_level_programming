#include "main.h"
/**
 *_memcpy - a function that copie memory area
 *@dest: memory wher is stored
 *@src: memory wher is copied
 *@n: number of byte
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
