#include "main.h"

/**
* _strlen - takes a pointer to char variable and return its length
* @s: the pointer to a char
*/

int _strlen(char *s)
{
if (*s == '\0')
{
return (0);
} else
{
return (1 + _strlen(++s)); 
}

}
