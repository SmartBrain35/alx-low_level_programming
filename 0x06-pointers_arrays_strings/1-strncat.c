#include "main.h"

/**
 * _strncat - function to concantenate two strings
 * @dest: a pointer to char parameter as the first string
 * @src: a pointer to char parameter as the second string
 * @n: the size of the string characters
 * @return: return the concantenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int c, i;
c = 0;
while (dest[c])
{
c++;
}

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[c + i] = src[i];
}
	
dest[c + i] = '\0';
return (dest);
}

